#include "libft_mem.h"
#include "libft_string.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*m;

	if (!(m = wrmalloc(count * size)))
		return (NULL);
	ft_bzero(m, size * count);
	return (m);
}