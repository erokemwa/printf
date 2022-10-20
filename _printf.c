<<<<<<< HEAD

#include "main.h"


=======
#include "main.h"
>>>>>>> e76c6638b30d2309b8c9c163f5b6a074ba37c3b6

/**
 *_printf - prints to the output
 *
 *@format: pointer
 *
 *Return: input len
 *
 */



int _printf(const char *format, ...)

{

	va_list arg;

	int done;



	va_start(arg, format);



	done = vfprintf(stdout, format, arg);

	va_end(arg);



	return (done);



}
