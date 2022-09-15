/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 08:55:42 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/15 09:07:30 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *str;
	size_t	i;

	i = 0;
	str = s;
	while (i < n)
		str[i++] = 0;
}
/*
int	main(void)
{
	char str1[5] = "Hello";
	char str2[5] = "Hello";
	bzero(str1, 2);
	bzero(str2, 2);
	write(1, str1, 5);
	write(1, "\n", 1);
	write(1, str2, 5);
	write(1, "\n", 1);
}*/
