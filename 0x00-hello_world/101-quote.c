#include <stdio.h>
#include <stdlib.h>
/**
 * sy - to allow system calls
 * Return: an integer showing success or failure
 */
int sy(const char *command);

/**
 * main - print some quotes
 * Return:  an error
 **/
int main(void)
{
sy(">&2 echo 'and that piece of art is useful\" - Dora Korpar, 2015-10-19' \n");
return (1);
}
