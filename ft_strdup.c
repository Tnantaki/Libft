/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 09:09:26 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/15 10:17:25 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dst;
	size_t	i;

	i = 0;
	dst = malloc((sizeof(char)) * (ft_strlen(s1) + 1));
	if (!dst)
		return (NULL);
	while (s1[i])
	{
		dst[i] = s1[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char *str1 = "Hello";
	char *str2 = "Hello";
	
	write(1, strdup(str1), strlen(str1) + 1);
	write(1, "\n", 1);
	write(1, ft_strdup(str2), strlen(str1) + 1);
	write(1, "\n", 1);
}*/
