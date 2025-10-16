t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *dest;

	if (!lst || !f || !del)
		return NULL;
	dest = malloc(sizeof(t_list));
	if (!dest)

	while (dest)
	 {
		dest->content = f(lst->content);
		lst = lst->next;
		dest->next = lst->next;
	 }
}
