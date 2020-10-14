#include "libft_hash.h"

t_hash	*ft_hashlast(t_hash *hash)
{
	if (!hash)
		return (0);
	while (hash->next)
		hash = hash->next;
	return (hash);
}
