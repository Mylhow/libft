#include "libft_hash.h"

void	ft_hashclear(t_hash **hash)
{
	t_hash *current;
	t_hash *delete;

	current = *hash;
	while (current)
	{
		delete = current;
		ft_hashdel_hash(hash, delete);
		current = current->next;
	}
}
