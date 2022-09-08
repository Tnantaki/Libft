/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 21:57:18 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/05 14:04:22 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char dst[10] = "A";
	char dest[10] = "A";
	char *src = "coucou";
	printf("%lu\n", strlcpy(dst, src, 2));
	printf("%s\n", dst);
	printf("%lu\n", ft_strlcpy(dest, src, 2));
	printf("%s\n", dest);
}*/
