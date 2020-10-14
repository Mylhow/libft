#include "libft_hash.h"
#include "libft_printf.h"

void	ft_hashprint(t_hash *hash, char *s)
{
	while(hash)
	{
		ft_printf("%s (%s\t%s)\n", s, hash->key, hash->value);
		hash = hash->next;
	}
}