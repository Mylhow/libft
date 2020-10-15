#include "libft_hash.h"
#include "libft_mem.h"

void	ft_hashclear(t_hash **hash)
{
	t_hash *current;
	t_hash *tmp;

	current = *hash;
	while (current)
	{
		tmp = current;
		wrfree(current->key);
		wrfree(current->value);
		current = current->next;
		wrfree(tmp);
	}
}
