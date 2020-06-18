#include "libft_string.h"

void	*ft_memccpy(void *dst, void const *src, int c, size_t n)
{
	unsigned char const	*psrc;
	char				*pdst;
	size_t				i;

	if (!dst && !src)
		return (0);
	i = 0;
	psrc = src;
	pdst = dst;
	while (i < n)
	{
		*(pdst + i) = *(psrc + i);
		if (*(psrc + i) == (unsigned char)c)
			return (&(*(pdst + i + 1)));
		i++;
	}
	return (NULL);
}