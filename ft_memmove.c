/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:13:32 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/14 12:25:04 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char *dststr;
	const unsigned char *srcstr;

	dststr = dst;
	srcstr = src;
	if (dst <= src)
		dststr = ft_memcpy(dst, src, len);
	else
	{
		while (len--)
			dststr[len] = srcstr[len];
	}
	return (dststr);
}
/*
int	main(void)
{
	char src[20] = "Hello world";
	char src2[20] = "Hello world";

	memmove(src + 2, src, 10);
	printf("memmove\t\t:%s\n", src);
	ft_memmove(src2 + 2, src2, 10);
	printf("ft_memmove\t:%s\n", src2);
}*/
