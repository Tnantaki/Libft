/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/18 20:10:09 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/19 21:34:06 by tnantaki         ###   ########.fr       */
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
//	(*new).content = content;
	new->next = NULL;
//	(*new).next = NULL;
	return (new);
}
/*
#include <stdio.h>
int main(void)
{
	t_list *head;
	char *text = "World";
	ft_lstnew("Hello");

	head = ft_lstnew(text);

	printf("%s\n", head->content);
}
*/
