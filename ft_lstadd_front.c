/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:34:11 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/20 16:35:04 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list *head;
	char *str1 = "Pepo01";
	char *str2 = "Pepo02";
	char *str3 = "Pepo03";

	head = ft_lstnew(str1);

	ft_lstadd_front(&head, ft_lstnew(str2));
	ft_lstadd_front(&head, ft_lstnew(str3));
	while (head)
	{
		printf("%s, ", (char *)head->content);
		head = head->next;
	}

}*/
