/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:31:09 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/14 12:36:21 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lendst = ft_strlen(dst);
	lensrc = ft_strlen(src);
	if (!src)
		return (0);
	if (dstsize == 0)
		return (lensrc);
	while (src[i] && lendst + i < dstsize - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	dst[lendst + i] = '\0';
	if (dstsize < lendst)
		return (lensrc + dstsize);
	return (lensrc + lendst);
}
/*
int	main(void)
{
	char dest[30] = "Hello";
	char dst[30] = "Hello";
	char *src = "123";
	printf("%lu\n", strlcat(dest, src, 10));
	printf("%s\n", dest);
	printf("%lu\n", ft_strlcat(dst, src, 10));
	printf("%s\n", dst);
	return (0);
}*/
