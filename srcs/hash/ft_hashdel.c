#include "libft_hash.h"
#include "libft_string.h"
#include "libft_mem.h"

static void 	ft_head_change(t_hash **hash)
{
	t_hash *tmp;

	tmp = *hash;
	while (tmp)
	{
		tmp->head = *hash;
		tmp = tmp->next;
	}
}

static void 	ft_delete(t_hash *hash)
{
	wrfree(hash->value);
	wrfree(hash->key);
	wrfree(hash);
}

void 	ft_hashdel_key(t_hash **hash, char *key)
{
	t_hash *current;

	current = *hash;
	while (current)
	{
		if (ft_strcmp(current->key, key) == 0)
		{
			if (!current->before) //Si, premier element
			{
				if (current->next) //Si, un next existe
				{
					*hash = current->next;
					current->next->before = 0;
					ft_head_change(hash);
				}
				else
					ft_delete(current);
			}
			else
			{
				current->before->next = current->next;
				current->next->before = current->before;
				ft_delete(current);
			}
		}
		current = current->next;
	}
}

void 	ft_hashdel_hash(t_hash **hash, t_hash *del)
{
	t_hash *current;

	current = *hash;
	while (current)
	{
		if (current == del)
		{
			if (!current->before) //Si, premier element
			{
				if (current->next) //Si, un next existe
				{
					*hash = current->next;
					ft_head_change(hash);
				}
				else
					ft_delete(current);
			}
			else
			{
				current->before->next = current->next;
				current->next->before = current->before;
				ft_delete(current);
			}
		}
		current = current->next;
	}
}