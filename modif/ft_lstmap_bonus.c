#include "libft.h"

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list  *new;
    t_list  *aux;
    t_list  *temp;

    if (!lst || !f)
        return (NULL);
    new = ft_lstnew(f(lst->content));
    if (!new)
        return (NULL);
    while (lst)
    {
        temp = ft_lstnew(f(lst->content));
        if (!temp)
        {
            ft_lstclear(&new, del);
            return (0);
        }
        aux->next = temp;
        aux = temp;
        lst = lst->next;
    }
    return (new);
}