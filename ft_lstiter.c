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

// void	ft_chage(void *content)
// {
// 	int	i = 0;
// 	content = (char *)content;
// 	while (*content)
// 		content++ = 'A';
// }
void addOne(void * p) {++*(int*)p;}

int	main(void)
{
	// t_list *head;
	// char *str1 = "Pepo01";
	// char *str2 = "Pepo02";
	// char *str3 = "Pepo03";

	// head = ft_lstnew(str1);
	// t_list *temp = head;
	// ft_lstadd_back(&head, ft_lstnew(str2));
	// ft_lstadd_back(&head, ft_lstnew(str3));
	// while (head)
	// {
	// 	printf("%s, ", head->content);
	// 	head = head->next;
	// }
	// printf("\n");
	// ft_lstiter(temp, ft_chage);
	// while (head)
	// {
	// 	printf("%s, ", head->content);
	// 	head = head->next;
	// }
	int tab[] = {0, 1, 2, 3};
	printf("%d\n", *tab);
	printf("%d\n", *(tab + 1));
	printf("%p\n", &tab);
	printf("%p\n", &*(tab + 1));
	printf("%p\n", tab);
	// t_list * l =  ft_lstnew(tab);
	// for (int i = 1; i < 4; ++i)
	// 	ft_lstadd_back(&l, ft_lstnew(tab + i));
	// ft_lstiter(l, addOne);
	// for (int i = 1; i <= 4; ++i)
	// {
	// 	printf("%d\n", *(int *)(l->content));
	// 	l = l->next;
	// }
}

