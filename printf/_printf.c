#include "main.h"
/**
* _printf - produces output according to a format.
*@format: character string
* Return: Number of char printed
*/
int _printf(const char *format, ...)
{
int printed_char;
conver_t f_list[] = {
{"c", printed_char},
{"s", printed_string},
{"%", printed_percent},
{"d", printed_integer},
{"i", printed_integer},
{"b", printed_binary},
{"r", printed_reversed},
{"R", rot13},
{"u", unsigned_integer},
{"o", printed_octal},
{"x", printed_hex},
{"X", printed_heX},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
return (-1);
va_start(arg_list, format);
printed_chars = parser(format, f_list, arg_list);
va_end(arg_list);
return (printed_chars);
}
