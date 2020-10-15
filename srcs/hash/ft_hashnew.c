#include "libft_hash.h"
#include "libft_mem.h"

t_hash	*ft_hashnew(char *key, void *value)
{
	t_hash *ptr;

	if (!(ptr = wrmalloc(sizeof(t_hash))))
		return (0);
	ptr->key = key;
	ptr->value = value;
	ptr->before = NULL;
	ptr->next = NULL;
	ptr->head = ptr;
	ptr->show = ft_hashprint;
	ptr->last = ft_hashlast;
	ptr->add_back = ft_hashadd_back;
	ptr->add_front = ft_hashadd_front;
	ptr->find = ft_hashfind;
	return (ptr);
}
