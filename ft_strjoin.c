/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:08:15 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/08 12:21:31 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	lens1;
	size_t	lens2;
	size_t	i;

	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	dst = malloc(sizeof(char) * (lens1 + lens2 + 1));
	while (i < lens1)
	{
		dst[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < lens2)
	{
		dst[lens1 + i] = s2[i];
		i++;
	}
	dst[lens1 + i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strjoin("Mos", "42"));
}*/
