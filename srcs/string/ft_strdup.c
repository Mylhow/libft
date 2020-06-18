#include "libft_string.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	int		sizes1;

	sizes1 = ft_strlen(s1);
	if (!(ptr = wrmalloc((sizes1 + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(ptr, s1, sizes1 + 1);
	return (ptr);
}