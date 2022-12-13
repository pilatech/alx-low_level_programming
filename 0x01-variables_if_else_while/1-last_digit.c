#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**                                                             
* main - for chec if positive or negative                       
* Return: if all went well. if there is a problem               
*/
int main(void)
{
int n;

char *msg;

int last_digit;

srand(time(0));
n = rand() - RAND_MAX / 2;
last_digit = n % 10;
srand(time(0));
n = rand() - RAND_MAX / 2;

if (last_digit < 0)
	last_digit = last_digit / -1;
if (last_digit == 0)
	msg = "and is 0";
else if (last_digit > 5 && last_digit < 6)
	msg = "and is greater than 5 and is less than 6 and not 0";
else if (last_digit < 6)
	msg = "and is less than 6 and not 0";
else if (last_digit > 5)
	msg = "and is greater than 5";
printf("Last digit of %i is %i %s\n", n, last_digit, msg);
return (0);
}
