/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 17:01:49 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/22 10:57:10 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = temp;
	}
}
/*
void	ft_delcont(void *content)
{
	free(content);
}

int	main(void)
{
	t_list *head;
	char *str1 = "Pepo01";
	char *str2 = "Pepo02";
	char *str3 = "Pepo03";

	head = ft_lstnew(str1);

	ft_lstadd_back(&head, ft_lstnew(str2));
	ft_lstadd_back(&head, ft_lstnew(str3));
	printf("before clear :");
	while (head)
	{
		printf("%s, ", head->content);
		head = head->next;
	}
	printf("\nafter clear :");
	ft_lstclear(&head, ft_delcont);
	while (head)
	{
		printf("%s, ", head->content);
		head = head->next;
	}
	printf("\n");
}
*/
