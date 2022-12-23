/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 20:38:51 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/21 21:57:19 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_node;
	t_list	*new_list;

	new_list = NULL;
	if (!lst)
		return (NULL);
	while (lst)
	{
		new_node = ft_lstnew(f(lst->content));
		if (!new_node)
			ft_lstclear(&new_list, del);
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*
//I create function fd_chage to change first charater to 'A'
void	*ft_chage(void *content)
{
	char *str1 = content;
	char *str2 = malloc(strlen(str1));
	int i = 0;

	while (str1[i])
	{
		if (i == 0)
			str2[i] = 'A';
		else
			str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

void	ft_delcont(void *content)
{
	free(content);
}

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
	temp = ft_lstmap(temp, ft_chage, ft_delcont);
	printf("Address of str1:%p\n", temp);
	while (temp)
	{
		printf("%s, ", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
}
*/