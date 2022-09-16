/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:18:58 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/16 20:50:08 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *find, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!find[0])
		return ((char *)str);
	if (!len)
		return (NULL);
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] == str[i + j] && (i + j) < len)
		{
			j++;
			if (find[j] == '\0')
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char *s1 = "A";
	char *str = "Hello how are you";
	char *find = "are";

	printf("%s\n", strnstr(s1, s1, 2));
	printf("%s\n", ft_strnstr(s1, s1, 2));
}*/
