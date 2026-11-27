#include <sys/types.h>
#include <string.h>

void *
memset(void *dst0, int c0, size_t length)
{
	u_char *dst;
	size_t t;

	for (t = 0, dst = dst0; t < length; t++, dst++)
		*dst = c0;
	return (dst0);
}
