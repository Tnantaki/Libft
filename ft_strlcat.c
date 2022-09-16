/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:31:09 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/16 19:39:17 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	lendst;
	size_t	lensrc;
	size_t	i;

	i = 0;
	lensrc = ft_strlen(src);
	if ((!dst && dstsize == 0) || dstsize == 0)
		return (lensrc);
	lendst = ft_strlen(dst);
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
	char b[15] = "nyzn !";

	printf("%lu\n", strlcat(dest, src, 10));
	printf("%s\n", dest);
	printf("%lu\n", ft_strlcat(dst, src, 10));
	printf("%s\n", dst);
	printf("%lu\n", strlcat(dst, b, 0));
	//printf("%lu\n", ft_strlcat(NULL, b, 0));
	return (0);
}*/
