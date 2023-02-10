/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:05:34 by tnantaki          #+#    #+#             */
/*   Updated: 2022/10/19 17:52:21 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;
	size_t	len;

	if (count >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	len = count * size;
	str = malloc(len);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
		str[i++] = 0;
	return (str);
}
/*
int	main(void)
{
	char *str2;
	char *str1 = "happybirthday";
	int i = 0;

	str2 = (char *)malloc(5);
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	printf("This is [%s]\n", str2);
	printf("This is [%lu]\n", strlen(str2));
	return (0);
}*/
