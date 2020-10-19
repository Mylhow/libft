#include "libft_string.h"
#include "libft_mem.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*ptr;
	size_t 		sizes1;

	sizes1 = ft_strlen(s1);
	if (sizes1 < n)
		n = sizes1;
	if (!(ptr = wrmalloc((n + 1) * sizeof(char))))
		return (NULL);
	ft_memcpy(ptr, s1, n);
	ptr[n + 1] = '\0';
	return (ptr);
}
