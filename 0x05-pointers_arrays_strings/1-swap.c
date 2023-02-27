/**
 * swap_int - takes in two parameters and swaps
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
*/

void swap_int(int *a, int *b)
{
	int iSwapper;

	iSwapper = *a;
	*a = *b;
	*b = iSwapper;
}
