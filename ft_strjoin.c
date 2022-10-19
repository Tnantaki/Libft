/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 11:08:15 by tnantaki          #+#    #+#             */
/*   Updated: 2022/10/19 08:54:03 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	*j;

	if (!s1 || !s2)
		return (NULL);
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	i = 0;
	j = &i;
	dst = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!dst)
		return (NULL);
	while (i < lens1)
		dst[*j - 1] = s1[i++];
	i = 0;
	while (i < lens2)
		dst[lens1 + *j - 1] = s2[i++];
	dst[lens1 + i] = '\0';
	return (dst);
}
*/
char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	size_t	lens1;
	size_t	lens2;
	size_t	i;
	size_t	j;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	lens1 = ft_strlen(s1);
	lens2 = ft_strlen(s2);
	dst = malloc(sizeof(char) * (lens1 + lens2 + 1));
	if (!dst)
		return (NULL);
	while (lens1--)
		dst[i++] = s1[j++];
	j = 0;
	while (lens2--)
		dst[i++] = s2[j++];
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	printf("%s\n", ft_strjoin("Mos", "42"));
}*/
