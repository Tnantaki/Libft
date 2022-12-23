/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 19:55:36 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/21 20:38:27 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void	ft_chage(void *content)
{
	// char *str = content;
	// *str = 'A';
	*(char *)content = 'A';
	// content = "Nano";
}
void addone(void * p) {++*(int*)p;}

int	main(void)
{
	t_list *head;
	char *str1 = strdup("Pepo01");
	char *str2 = strdup("Pepo02");
	char *str3 = strdup("Pepo03");

	head = ft_lstnew(str1);
	ft_lstadd_back(&head, ft_lstnew(str2));
	ft_lstadd_back(&head, ft_lstnew(str3));
	t_list *temp = head;
	printf("Address of str1:%p\n", head);
	while (head)
	{
		printf("%s, ", (char *)head->content);
		head = head->next;
	}
	printf("\n");
	ft_lstiter(temp, ft_chage);
	printf("Address of str1:%p\n", temp);
	while (temp)
	{
		printf("%s, ", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
}*/
