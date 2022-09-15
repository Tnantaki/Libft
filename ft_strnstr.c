/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 19:18:58 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/12 22:48:46 by tnantaki         ###   ########.fr       */
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
	while (str[i] && i < len)
	{
		j = 0;
		while (find[j] == str[i + j] && (i + j) < len)
			j++;
		if (find[j] == '\0')
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	char *str = "Hello how are you";
	char *find = "Hello";

	printf("%s\n", ft_strnstr(str, find, 10));
}*/
