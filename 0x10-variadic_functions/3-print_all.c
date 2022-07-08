#include "variadic_functions.h"
/**
 * print_int - prints integer arguments
 * @args: integer arguments from the print_all function.
 */

void print_int(va_list args)
{
	printf("%d", va_arg(args, int));
}

/**
 * print_float - function that prints float arguments.
 * @args: arguments from the print_all function.
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_char - function that prints character arguments.
 * @args: arguments from the function print_all.
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_str - function that prints string arguments.
 * @args: arguments from the print_all functions.
 */

void print_str(va_list list)
{
	char *str = va_arg(list, char *);

	if (str != NULL)
			printf("%s", str);

		else
			printf("(nil)");

}

/**
 * print_all - function that prints any arguments passed into it.
 * @format: a list of types of arguments passed to the function.
 * Return: any argument.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0, j = 0;
	char *separator = "";
	va_start(args, format);	

	printTypeStruct printType[] = {
		{"i", print_int},
		{"f", print_float},
		{"c", print_char},
		{"s", print_str},
		{0, NULL}
		
	};

	while (format && format[i])
	{
		j = 0;

		while(j < 4)
		{
			if(*printType[j].type == format[i])
			{
				printf("%s", separator);
				printType[j].printer(args);
				separator = ", ";
				break;
			}
			j++;
		}
		i++;
	}

	va_end(args);
	printf("\n");
}
