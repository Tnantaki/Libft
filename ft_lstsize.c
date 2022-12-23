/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:54:17 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/21 09:59:22 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	size;

	size = 0;
	if (!lst)
		return (0);
	while (lst->next != NULL)
	{
		lst = lst->next;
		size++;
	}
	if (lst->next == NULL)
		size++;
	return (size);
}
/*
#include <stdio.h>
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
	size = ft_lstsize(head);
	printf("size :%d\n", size);
}
*/