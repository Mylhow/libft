#include "libft_string.h"
#include "libft_mem.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	maxsize;

	i = -1;
	if (s == 0)
		return (0);
	maxsize = (start >= ft_strlen(s)) ? 0 : len;
	if (!(substr = wrmalloc((maxsize + 1) * sizeof(char))))
		return (0);
	while (++i < maxsize && s[start + i])
		substr[i] = s[start + i];
	substr[i] = '\0';
	return (substr);
}
