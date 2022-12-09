#include <stdio.h>
#include <stdlib.h>
/**
 * system - to allow system calls
 * Return: an integer showing success or failure
 */
int system(const char *command);

/**
 * main - print some quotes
 * Return:  an error
 **/
int main(void)
{
system(">&2 echo and that piece of art is useful\" - Dora Korpar, 2015-10-19");
return (1);
}
