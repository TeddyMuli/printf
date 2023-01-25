#ifndef PRINTF
#define PRINTF
#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

/**
 *
 *
 *
 */

 struct convert
 {
     char *symbol;
     int (*f)(va_list);
 };
 typedef struct convert convert_a;

int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_percent(va_list);
int print_integer(va_list);
int print_number(va_list);
int print_binary(va_list);
int print_reversed(va_list arg);
int rot13(va_list);
int unsigned_integer(va_list);
int print_octal(va_list list);
int print_hex(va_list list);
int print_heX(va_list list);
int _write_char(char);
int parser(const char *format, convert_a f_list[], va_list arg_list);
unsigned int base_len(unsigned int, int);
char *rev_string(char *);
void write_base(char *str);
char *_memcpy(char *dest, char *src, unsigned int n);
int print_unsgined_number(unsigned int);
#endif

