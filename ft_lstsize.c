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
	t_list	*lst;

	lst = ft_lstnew((void *)1);
	printf("%d\n", ft_lstsize(lst));
}

*/
