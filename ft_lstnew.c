/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:10:09 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/22 10:39:42 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
/*
// line 22 can use (*new).content = content;
// line 23 cane use (*new).next = NULL;
#include <stdio.h>
int main(void)
{
	t_list *head;
	printf("@head :%p\n", head);
	printf("@&head :%p\n", &head);

	head = ft_lstnew("World");

	printf("%s \n", (char *)head->content);
	printf("%s \n", (char *)head->next);
	printf("@head :%p\n", head);
	printf("@&head :%p\n", &head);
	printf("@head->content :%p\n", head->content);
	printf("@head->content :%p\n", head->next);
}*/
