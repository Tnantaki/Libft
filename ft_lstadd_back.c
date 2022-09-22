/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 11:07:06 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/21 11:39:16 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*temp;

	temp = *lst; // copy pointer to used
	if (*lst)
	{
		while (temp->next != NULL)
			temp = temp->next;
		//if (temp == NULL)
		temp->next = new;
	}
	else
		*lst = new;
}
//(lst) is adress all **linked list
//(*lst) is adress of first node
//(**lst) we can't use this for represent value we need to use ((*lst)->content)
