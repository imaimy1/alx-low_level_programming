/*
 * File: 2-strlen.c
 * Auth:  halima
 */ 
size_t_strlen(const char *str)

	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
