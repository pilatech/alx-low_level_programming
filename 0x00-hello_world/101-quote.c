#include <stdio.h>
#include <stdlib.h>
/**
 * system - to allow system calls
 * @command: add a command here
 * Return: an integer showing success or failure
 */
int system(const char *command);

/**
 * main - print some quotes
 * Return:  an error
 **/
int main(void)
{
int (*sys)(char *)
sys = system;

sys(">&2 echo 'and that piece of art is useful\" - Dora Korpar, 2015-10-19'");
return (1);
}
