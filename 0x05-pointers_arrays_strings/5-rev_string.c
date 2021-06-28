/**
 * rev_string - reverses given string
 *
 * @s: string to reverse
 *
 * Return: always void
 */
void rev_string(char *s)
{
	char *end = s;
	char store;

	while (*end)
		end++;
	end = end - 1;
	while (s < end)
{
	store = *s;
	*s++ = *end;
	*end-- = store;
}
}
