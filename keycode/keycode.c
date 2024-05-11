/**
 * @file keycode.c
 * @author Krysin Dmitriy <krdimitrius@gmail.com
 * @date 2020
 * @brief Print keycode
 */

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include <stdio.h>

#if defined(_WIN32) || defined (_WIN64)
#include <conio.h>
#endif

#if defined(linux) || defined(__linux)
#include "kb.h"
#endif

//------------------------------------------------------------------------------
// const defines
//------------------------------------------------------------------------------

static const char copyright[] =
	"\n  Print Key Code v.0.2"
	"\n  ESC - exit\n\n";

//------------------------------------------------------------------------------
// functions
//------------------------------------------------------------------------------

int main()
{
	int ct = 0;
	int last_code = 0;
	printf("%s", copyright);

	while(1) {  
		int code = getch();
		printf("%d: [%d]=[%02Xh]=[%03oo]\n", ++ct, code, code, code);
		if ((code == 27) && (last_code == 27))
			break;
		last_code = code;
	}

	return 0;
}
