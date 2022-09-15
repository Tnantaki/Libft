/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:37:34 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/11 23:18:36 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_checkfront(char const *s1, char const *set)
{
	size_t	i;
	size_t	begin;

	i = 0;
	begin = 0;
	while (set[i])
	{
		i++;
		if (set[i - 1] == s1[begin])
		{
			begin++;
			i = 0;
		}
	}
	return (begin);
}

size_t	ft_checkend(char const *s1, char const *set, size_t lens1)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		i++;
		if (set[i - 1] == s1[lens1 - 1])
		{
			lens1--;
			i = 0;
		}
	}
	return (lens1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	begin;
	size_t	lens1;
	size_t	lendst;

	begin = ft_checkfront(s1, set);
	lens1 = ft_checkend(s1, set, ft_strlen(s1));
	if (begin >= lens1)
		return ((char *)ft_calloc(1, sizeof(char)));
	lendst = lens1 - begin;
	dst = malloc(sizeof(char) * lendst + 1);
	i = 0;
	while (i < lendst)
		dst[i++] = s1[begin++];
	dst[i] = '\0';
	return (dst);
}
/*
int	main(void)
{
	char *str = "   xxxtripouille   xxx";
	char *trim = "str";

	char *s = ft_strtrim(str, trim);
	printf("%s\n", s);
	printf("%d\n", strcmp(s, ""));
	return (0);
}*/
