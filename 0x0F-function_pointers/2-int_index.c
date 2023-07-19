/**
 * int_index - searches for an integer in an array.
 * @array: pointer to the first element of the array.
 * @size: size of the array.
 * @cmp: function that compare values.
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	if (array != NULL || cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
