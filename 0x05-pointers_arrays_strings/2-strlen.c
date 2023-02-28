/*
 * File: 2-strlen.c
 *  halima
 */ 
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
