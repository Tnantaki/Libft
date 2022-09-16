/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 14:13:32 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/16 19:43:50 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{	
	unsigned char		*dststr;
	const unsigned char	*srcstr;

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

	char *src3;
	memmove(src + 3, src, strlen(src));
	printf("memmove\t\t:%s\n", src);
	ft_memmove(src2 + 3, src2, strlen(src2));
	printf("ft_memmove\t:%s\n", src2);

	printf("---------------------\n");
	char dst1[240];
	char dst2[240];
	char *data = "thiß ß\xde\xad\xbe\xeftriñg will be øvérlapéd !\r\n";

	memcpy(dst1, data, strlen(data));
	memcpy(dst2, data, strlen(data));
	memmove(dst1, dst1 + 3, 225);
	printf("memmove\t\t:%s\n", dst1);
	ft_memmove(dst2, dst2 + 3, 225);
	printf("ft_memmove\t:%s\n", dst2);
}*/
