#include "libft_string.h"

void	*ft_memrchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (str[n] == c)
			return (&str[n]);
	}
	return (0);
}