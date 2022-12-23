/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 16:03:33 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/22 10:55:49 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	if (lst)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void	ft_delcont(void *content)
{
	// free(content);
}
// the reason we free content because of in case user use
// malloc to malloc content.

int	main(void)
{
	t_list *head;
	// printf("%lu\n", sizeof(t_list));
	char *str1 = "Pepo01";
	head = ft_lstnew(str1);
	printf("%s \n", head->content);
	// printf("%p\n", head);
	// printf("%lu\n", sizeof(head->content));
	ft_lstdelone(head, ft_delcont);
	printf("%s \n", head->content);
	// printf("%p\n", head);
	// printf("%lu\n", sizeof(head->content));
}
*/
