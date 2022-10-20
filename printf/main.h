#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdlib.h>
#include <sdtarg.h>
#include <unistd.h>
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
#endif
