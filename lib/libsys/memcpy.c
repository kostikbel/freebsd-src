#include <string.h>

void *
memcpy(void *dst0, const void *src0, size_t length)
{
	const char *src;
	char *dst;
	size_t t;

	if (length == 0 || dst0 == src0)
		return (dst0);
	src = src0;
	dst = dst0;
	for (t = 0; t < length; t++)
		dst[t] = src[t];
	return (dst0);
}
