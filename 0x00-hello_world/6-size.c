#include <stdio.h>
/* main - to check the data type sizes                             
 * Return: whether successful or not                               
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	printf("Size of a char: %d byte(s)\n", (int) sizeof(a));
	printf("Size of int: %d byte(s)\n", (int) sizeof(b));
	printf("Size of long int: %d byte(s)\n", (int) sizeof(c));
	printf("Size of long long int: %d byte(s)\n",(int) sizeof(d));
	printf("Size of float: %d byte(s)\n",(int) sizeof(e));
	return (0);
}

