#include "libft_string.h"

char	*ft_strchr(const char *s, int c)
{
	return (ft_memchr((const void *)s, c, ft_strlen(s) + 1));
}