#ifndef FUNCTION_PTR_H
#define FUNCTION_PTR_H

void _putchar(char c);

void print_name(char *name, void (*f)(char *));

void array_iterator(int *array, size_t size, void (*action)(int));
#endif
