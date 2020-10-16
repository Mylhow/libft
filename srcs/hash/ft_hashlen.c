#include "libft_hash.h"
#include <stddef.h>

size_t	ft_hashlen(t_hash *hash)
{
	size_t i;

	i = 0;
	if (!hash)
		return (0);
	while (hash)
	{
		i++;
		hash = hash->next;
	}
	return (i);
}