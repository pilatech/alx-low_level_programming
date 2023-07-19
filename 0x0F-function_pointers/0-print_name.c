/**
 * print_name - prints a given name.
 * @name: the name.
 * @f: the function for doing the actual print.
 *
 * Return: nothing.
 */
void print_name(char *name, void(*f)(char *))
{
	if (name != NULL || f != NULL)
		f(name);
}

