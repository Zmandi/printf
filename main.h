#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <stdarg.h>

int _putchar(char c);

/*functions*/
int print_char(char c);
int print_str(char *s);
int print_per(void);
int print_int(int d);

int _printf(const char *format, ...);

#endif /*MAIN_H*/
