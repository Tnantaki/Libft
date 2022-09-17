/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 12:31:09 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/17 12:47:57 by tnantaki         ###   ########.fr       */
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
	if ((!dst || dstsize == 0) && dstsize == 0)
		return (lensrc);
	lendst = ft_strlen(dst);
	while (src[i] && lendst + i < dstsize - 1)
	{
		dst[lendst + i] = src[i];
		i++;
	}
	if (lendst < dstsize)
		dst[lendst + i] = '\0';
	if (dstsize < lendst)
		return (lensrc + dstsize);
	return (lensrc + lendst);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	// char dest[30] = "Hello";
	// char dst[30] = "Hello";
	// char *src = "123";
	// char bo[15] = "nyzn !";
	char *destwar = malloc(sizeof(char) * 15);
	char *destwar2 = malloc(sizeof(char) * 15);

	// printf("%lu\n", strlcat(dest, src, 10));
	// printf("%s\n", dest);
	// printf("%lu\n", ft_strlcat(dst, src, 10));
	// printf("%s\n", dst);
	// printf("%lu\n", strlcat(dst, bo, 0));
	//printf("%lu\n", ft_strlcat(NULL, bo, 0));
	// memset(destwar, 'r', 15);
	memset(destwar2, 'r', 15);
	char *src2 = "lorem ipsum dolor sit amet";
	printf("%lu\n", strlcat(destwar, src2, 5));
	write(1, destwar, 15);
	write(1, "\n", 1);
	printf("%lu\n", ft_strlcat(destwar2, src2, 5));
	write(1, destwar2, 17);
	write(1, "\n", 1);
	return (0);
}
*/