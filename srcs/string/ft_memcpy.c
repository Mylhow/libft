#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*pdst;
	const char	*psrc;

	if (!dest && !src)
		return (NULL);
	pdst = dest;
	psrc = src;
	while (n-- > 0)
		*(pdst + n) = *(psrc + n);
	return (dest);
}