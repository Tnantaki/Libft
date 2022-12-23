/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:58:00 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/21 11:03:38 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
int	main(void)
{
	t_list	*head;
	int size;
	char *str1 = "Pepo01";
	char *str2 = "Pepo02";
	char *str3 = "Pepo03";
	char *str4 = "Pepo04";

	head = ft_lstnew(str1);
	ft_lstadd_back(&head, ft_lstnew(str2));
	ft_lstadd_back(&head, ft_lstnew(str3));
	ft_lstadd_back(&head, ft_lstnew(str4));
	printf("before :%s\n", (char *)head->content);
	head = ft_lstlast(head);
	printf("after  :%s\n", (char *)head->content);
}*/
