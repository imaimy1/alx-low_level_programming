/*
 * File: 3-puts.c
 * Auth:halima
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
