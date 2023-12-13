#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include<stdarg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>
#include<unistd.h>
#include<sys/stat.h>
#include<sys/types.h>
#include<sys/wait.h>
#include <stdarg.h>
typedef struct format
{
	char *ph;
	int (*function)();
} convert;
void safe_free(void *);
int is_reactive(char **);
void not_reactive(char **, char **);
int _printf(const char * const format, ...);
int _putchar(char c);
int print_d(va_list args);
int print_37(void);
int print_bin(va_list val);
int print_c(va_list val);
int print_exc_string(va_list val);
int print_HEX(va_list val);
int print_hex(va_list val);
int print_HEX_extra(unsigned int num);
int print_hex_extra(unsigned long int num);
int print_i(va_list args);
int print_oct(va_list val);
int print_pointer(va_list val);
int print_rot13(va_list args);
int print_revs(va_list args);
int _strlen(char *s);
int print_s(va_list val);
int print_unsigned(va_list args);
char *_strcat(char *dest, const char *src);
char *_strcpy(char *dest, const char *src);
char *_strdup(char *str);
void input_proc(char *, char **);
int _strcmp(const char*, const char*);
void execmd(char **argv, char**);
char *get_location(char *command);
void my_exit(char **);
void print_env(char **);
void free_arg(char **);
void free_args(int count, ...);
#endif
