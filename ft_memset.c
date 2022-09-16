/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:18:59 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/16 19:44:13 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			i;
	unsigned char	*str;

	i = 0;
	str = b;
	c %= 256;
	while (i < len)
		str[i++] = c;
	return (str);
}
/*
int	main(void)
{
	char str[5] = "Hello";

	printf("%s\n", memset(str, 'A', 2));
	printf("%s\n", ft_memset(str, 'A', 2));
	return (0);
}*/
