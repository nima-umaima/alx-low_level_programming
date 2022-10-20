#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
struct convert
{
char *sym;
int (*f)(va_list);
};
typedef struct convert conver_t;
int parser(const char *format, conver_t f_list[], va_list arg_list);
int _printf(const char *format, ...);
#endif
