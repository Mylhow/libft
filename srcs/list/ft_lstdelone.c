#include "libft_list.h"
#include "libft_mem.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst)
		return ;
	del(lst->content);
	wrfree(lst);
}