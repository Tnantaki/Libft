/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:18:59 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/06 15:18:10 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *b, int c, size_t len)
{
	unsigned int	i;

	i = 0;
	while (i < len)
		((unsigned char *)b)[i++] = (unsigned char) c;
}
/*
#include <stdio.h>

int	main(void)
{
	char str[5] = "Hello";
	ft_memset(str, 'A', 2);
	printf("%s\n", str);
	return (0);
}*/
