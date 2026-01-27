#include <stddef.h>
#include <stdio.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char *p;

	p = (unsigned char *)s;
	size_t i = 0;

	while (i < n)
	{
		p[i] = 0;
		i++;
	}
	return s;
}
