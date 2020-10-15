#include "libft_hash.h"
#include "libft_string.h"

t_hash	*ft_hashfind(t_hash *hash, char *key)
{
	if (!hash)
		return (0);
	while (hash)
	{
		if (ft_strcmp(hash->key, key) == 0)
			return (hash);
		hash = hash->next;
	}
	return (0);
}