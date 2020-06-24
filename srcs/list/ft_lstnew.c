#include "libft_list.h"
#include "libft_mem.h"

t_list	*ft_lstnew(void *content)
{
	t_list *ptr;

	if (!(ptr = wrmalloc(sizeof(t_list))))
		return (0);
	ptr->content = content;
	ptr->next = NULL;
	return (ptr);
}
