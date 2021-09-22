#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst == NULL)
		return ((void)0);
	(*del)(lst->content);
	free(lst);
}
