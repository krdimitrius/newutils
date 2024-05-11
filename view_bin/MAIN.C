#include <dos.h>
#include <ctype.h>
#include <process.h>
#include <alloc.h>
#include <stdio.h>
#include <io.h>
#include <conio.h>
#include <time.h>
#include <string.h>

#include "twindow.h"
#include "mouse.h"
#include "keys.h"

int enter_data(WINDOW *,unsigned int *);
int enter_long_data(WINDOW *,unsigned long *);
int enter_name(WINDOW *,char *);

void SetAdres(void);
void PrnCol24(void);

WINDOW *wnd;
FILE *fl;
char	version[]={"(c) Krisin D. <<< Viewer BIN >>> Version 17.03.98."};

char huge *adat;
struct Dat_BUFER{
	char huge 		*dat;	/* массив данных */
	unsigned long   len;
	unsigned int  	nbl; 	/* число блоков по 1024 байт в буфере */
	unsigned long   adr;
	int 			fl;	/* признак существования буфера */
} bufer={0,0,0,0,0};

main(int argc,char *argv[])
	{
	int nbottom;

	if(argc<2) exit(1);
	fl=fopen(argv[1],"rb");
	if(fl==NULL)
		{
		printf("\n Не могу открыть файл %s\n",argv[1]);
		exit(1);
		}

	bufer.len=filelength(fileno(fl));
	bufer.nbl=(unsigned int)(bufer.len/1024+1);
	bufer.fl=1;
	bufer.dat=(char huge *)farmalloc((unsigned long)(bufer.len+1024));
	if(bufer.dat==NULL)
		{
		printf("\n Недостаточно памяти для размещения буфера !\n");
		exit(1);
		}
	fread(bufer.dat,1024,bufer.nbl,fl);

	wnd=establish_window(0,0,25,80);
	set_title(wnd,version);
	set_colors(wnd,ALL,BLUE,WHITE,BRIGHT);
	display_window(wnd);

	Ms_init(&nbottom);
	Ms_off();

	while(1)
		{
		PrnCol24();
		switch(	Ms_get_char() )
			{
			case ESC:
				farfree((char far *)bufer.dat);
				Ms_off();
				close_all();
				exit(0);
			case CR:
				SetAdres();
				break;
			case PGUP:
				if(bufer.adr<(bufer.len-4)) bufer.adr+=3;
				else						bufer.adr=bufer.len-4;
				break;
			case PGDN:
				if(bufer.adr>3) bufer.adr-=3;
				else			bufer.adr=0;
				break;
			case UP:
				if(bufer.adr<(bufer.len-1)) bufer.adr++;
				else						bufer.adr=bufer.len-1;
				break;
			case DN:
				if(bufer.adr>1) bufer.adr--;
				else			bufer.adr=0;
				break;
			default:
				break;
			}
		}
	exit(0);
	}

/*========================================================================
		Различные вспомогательные функции
========================================================================*/

void SetAdres()
	{
	while(1)
		{
		wcursor(wnd,30,0); wprintf(wnd,"Адрес :                     ");
		wcursor(wnd,38,0);
		switch(	enter_long_data(wnd,&bufer.adr) )
			{
			case 2:
			case 0:
				wcursor(wnd,30,0); wprintf(wnd,"                    ");
				return;
			default:
				break;
			}
		}
	}

void PrnCol24()
	{
	int x=0,y=0,i,j;
	char cod[5],sym[5]={0x20,0xdf,0xdc,0xdb};
	wcursor(wnd,1,0); wprintf(wnd,"Текущий адрес : %lx      ",bufer.adr);
	wcursor(wnd,30,0); wprintf(wnd,"                              ");

	adat=bufer.dat+bufer.adr;

	if( bufer.adr>=bufer.len )
		{
		SetAdres();
		return;
		}

	for(x=0;x<78;x++)
		{
		y=2;
		for(i=0;i<3;i++)
			{
			cod[3]=*adat;
			cod[2]=*adat>>2;
			cod[1]=*adat>>4;
			cod[0]=*adat>>6;
			for(j=0;j<4;j++)
				{
				wcursor(wnd,x,y); wprintf(wnd,"%c",sym[cod[j]&0x3]);
				y++;
				}
			adat++;
			}
		}
	return;
	}

/*------------ п/п ввода инфоpмации из окна ------------*/
int enter_data(WINDOW *wind,unsigned int *val){
	int i,x,y,ci;
	char cc[10]={0};

	for(i=0;i<7;i++)
		{
		ci=Ms_get_char();
		switch(ci)
			{
			case ESC:	 return 0;
			case RUBOUT: return 1;
			case UP:	 return 3;
			case DN:	 return 4;
			case CR:	 goto ou;
			default:	 break;
			}
		if(isxdigit(ci)==0)
			{
			error_message("   Только HEX Числа !!!  ");
			delay(500);
			clear_message();
			i--;
			}
		else
			{
			cc[i]=ci;
			curr_cursor(&x,&y);
			wputchar(wind,ci);
			cursor(x+1,y);
			}
		}
ou:	sscanf(cc,"%6x",val);
	return 2;
	}
/*------------ п/п ввода инфоpмации из окна ------------*/
int enter_long_data(WINDOW *wind,unsigned long *val){
	int i,x,y,ci;
	char cc[20]={0};

	for(i=0;i<9;i++)
		{
		ci=Ms_get_char();
		switch(ci)
			{
			case ESC:	 return 0;
			case RUBOUT: return 1;
			case UP:	 return 3;
			case DN:	 return 4;
			case CR:	 goto ou;
			default:	 break;
			}
		if(isxdigit(ci)==0)
			{
			error_message(" Только HEX Числа ! ");
			delay(500);
			clear_message();
			i--;
			}
		else
			{
			cc[i]=ci;
			curr_cursor(&x,&y);
			wputchar(wind,ci);
			cursor(x+1,y);
			}
		}
ou:	sscanf(cc,"%8lx",val);
	return 2;
	}

/*------------ п/п ввода имени из окна ------------*/
int enter_name(WINDOW *wp,char name[50])
	{
	int i,j,x=1;
	char ci;

	wcursor(wp,x,0);

	for(j=0; j<45; j++)
		{
		if ( name[j]=='\0' ) break ;
		wprintf(wp,"%c",name[j]);
		x++;
		wcursor(wp,x,0);
		}

	i=j;
	while(i<45)
		{
		ci=Ms_get_char();
		switch(ci)
			{
			case ESC:
				return 0;
			case CR:
				return 2;
			case RUBOUT:	/* забой */
				if ( i>0 )
					{
					x--;
					i--;
					wcursor(wp,x,0); wprintf(wp," ");
					wcursor(wp,x,0);
					}
				name[i]='\0';
				break;
			case BS:	/* влево */
				if ( i>0 )
					{
					x--;
					i--;
					wcursor(wp,x,0);
					}
				break;
			case FWD:	/* вправо */				if( i<49 )
					{
					if(name[i]=='\0')
						{
						name[i]=' ';
						name[i+1]='\0';
						}
					i++;
					x++;
					wcursor(wp,x,0);
					}
				break;
			default:
				if(ci>=32)
					{
					if(name[i]=='\0') name[i+1]='\0';
					name[i++]=ci;
					wcursor(wp,x,0); wprintf(wp,"%c",ci);
					x++;
					wcursor(wp,x,0);
					}
				break;
			}
		}
	return 2;
	}

/*--------------------- end of programm ----------------------------*/
