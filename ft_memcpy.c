/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 15:08:59 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/14 11:22:22 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	unsigned char *dststr;
	const unsigned char *srcstr;

	dststr = dst;
	srcstr = src;
	if (!dst && !src)
		return (NULL);
	while (len--)
		dststr[len] = srcstr[len];
	return (dststr);
}
/*
int	main(void)
{
	char src[15] = "Hello world";
	char src2[15] = "Hello world";

	memcpy(src + 2, src, 10);
	printf("memcpy\t\t:%s\n", src);
	ft_memcpy(src2 + 2, src2, 10);
	printf("ft_memcpy\t:%s\n", src2);
}*/
