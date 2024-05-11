/**
 * @file kb.h
 * @brief keyboard input prorotypes
 */

/**
 * Check stdin
 * @return 1 if stdin not empty
 */
int kbhit (void);

/**
 * Retutn last symbol scan code from stdin
 * @return scan code
 */
int getch (void);

/**
 * Retutn scan code last symbol from stdin
 * @return scan code
 */
int getkb (void);

// eof
