#include<unistd.h>
/**
 * _putchar - writes the character cto stdout
 * @c: The character to print
 *
 * Return: on sucess 1
 * on error, -1 is returned, and errno is set appropriately
 */
in_putchar(char c)
{
	Return(write(1, &c, 1));
}
