#include "libft_list.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *nlst;
	t_list *clst;

	if (!lst)
		return (lst);
	clst = 0;
	nlst = 0;
	while (lst)
	{
		if (!(clst = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&nlst, del);
			return (0);
		}
		ft_lstadd_back(&nlst, clst);
		lst = lst->next;
	}
	return (nlst);
}
