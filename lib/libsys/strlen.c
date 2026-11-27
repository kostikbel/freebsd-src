#include <string.h>

size_t
strlen(const char *str)
{
	size_t res;

	for (res = 0; *str != '\0'; res++, str++)
		;
	return (res);
}

