/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <tnantaki@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/06 17:05:34 by tnantaki          #+#    #+#             */
/*   Updated: 2022/10/19 17:48:45 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (count >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	str = malloc(count * size);
	if (!str)
		return (NULL);
	ft_bzero(str, count * size);
	return (str);
} */

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;
	char	*s;
	size_t	i;
	size_t	len;

	if (count >= SIZE_MAX && size >= SIZE_MAX)
		return (NULL);
	len = count * size;
	str = malloc(len);
	if (!str)
		return (NULL);
	i = 0;
	s = str;
	while (i < len)
		s[i++] = 0;
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
