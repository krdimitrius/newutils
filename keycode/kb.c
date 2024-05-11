/**
 * @file kb.c
 * @brief keyboard input
 */

#if defined(linux) || defined(__linux)

//------------------------------------------------------------------------------
// includes
//------------------------------------------------------------------------------
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <termios.h>

#include "kb.h"

//------------------------------------------------------------------------------
// functions
//------------------------------------------------------------------------------

int kbhit (void)
{
	int result;
	struct termios tp1;	// terminal parameters
	struct termios tp2;	// terminal parameters for restore
	fd_set readfds;	// files descriptors for monitoring status change
	struct timeval tv = { 0, 0 }; // time interval for status change wait
	int infd = fileno (stdin);

	tcgetattr(infd, &tp1);
	tcgetattr(infd, &tp2);
	tp1.c_lflag = (tp1.c_lflag) & ~(ICANON) & ~(ECHO);
	tcsetattr(infd, TCSANOW, &tp1);

	FD_ZERO(&readfds);
	FD_SET(infd, &readfds);
	result = select(infd + 1, &readfds, NULL, NULL, &tv);
	tcsetattr(infd, TCSANOW, &tp2);

	if (result < 0)
		return 0;

	fflush (stdout);
//	fflush (stdin);

	return (FD_ISSET(infd, &readfds) ? 1 : 0);
}

int getch (void)
{
	struct termios tp1;	// terminal parameters
	struct termios tp2;	// terminal parameters for restore
	int c; // symbol code

	tcgetattr(STDIN_FILENO, &tp1);
	tcgetattr(STDIN_FILENO, &tp2);
	tp1.c_lflag = (tp1.c_lflag) & ~(ICANON) & ~(ECHO);
	tcsetattr(STDIN_FILENO, TCSANOW, &tp1);

	printf(" \b"); //"\b"
	fflush(stdout);
	c = getchar();

	tcsetattr(STDIN_FILENO, TCSANOW, &tp2);
	fflush(stdin);
	return c;
}

/**
 * Retutn scan code last symbol from stdin
 * @return scan code
 */
int getkb (void)
{
	int ch;
	do {
		ch = getch();

		fflush(stdin);
		fflush(stdout);
	}
	while (kbhit());
	return ch;
}

#endif // #if defined(linux) || defined(__linux)

// eof
