/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 11:51:40 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/22 10:41:57 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;
	unsigned char	care;

	i = 0;
	str = (unsigned char *)s;
	care = (unsigned char)c;
	while (n--)
	{
		if (str[i] == care)
			return (str + i);
		i++;
	}
	return (0);
}
