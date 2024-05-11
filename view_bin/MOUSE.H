/*════════════════════════════════════════════════════════════════
═════════════ Mouse.c ═════════════ */
typedef struct _MOUSE_STATE_ {
		 unsigned bottoms ;
		 unsigned  x ;
		 unsigned  y ;
		 } MOUSE_STATE ;

extern union REGS reg ;
extern struct SREGS segregs ;
extern int botm ;
extern char buf_mous[20];
extern char *bufptr;
extern char form[64];
extern MOUSE_STATE state ;

int Ms_init(int * nbottoms);                /* инициализация мыши */
void Ms_on(void);                           /* включение курсора мыши */
void Ms_off(void);                          /* выключение курсора мыши */
MOUSE_STATE *Ms_query(MOUSE_STATE *state ); /* определение текущих координат курсора мыши */
void Ms_setcr(int,int);            			/* установка курсора мыши в заданную точку */
int Ms_querp(MOUSE_STATE *state,int); 		/* определение состояния мыши при нажатии на клавишу */
void Ms_Posishion ( void );
void Ms_rang ( int, int, int, int ); 		/* ограничение перемещения мыши по экрану */


