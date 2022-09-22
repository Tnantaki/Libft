/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/08 12:37:34 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/17 15:56:39 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_front(char const *s1, char const *set)
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

size_t	ft_end(char const *s1, char const *set, size_t lens1, size_t be)
{
	size_t	i;
	size_t	last;

	i = 0;
	last = 0;
	while (set[i] && lens1 > be)
	{
		i++;
		if (set[i - 1] == s1[lens1 - 1])
		{
			lens1--;
			last++;
			i = 0;
		}
	}
	return (last);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*dst;
	size_t	i;
	size_t	begin;
	size_t	endlen;
	size_t	lendst;

	if (!s1 || !set)
		return (NULL);
	begin = ft_front(s1, set);
	endlen = ft_end(s1, set, ft_strlen(s1), begin);
	lendst = ft_strlen(s1) - begin - endlen;
	dst = malloc(sizeof(char) * lendst + 1);
	if (!dst)
		return (NULL);
	i = 0;
	while (i < lendst)
		dst[i++] = s1[begin++];
	dst[i] = '\0';
	return (dst);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "helloworldhelloz";
	char *trim = "world";

	// char *s = ft_strtrim(str, trim);
	// printf("%s\n", s);
	// printf("%d\n", strcmp(s, ""));
	// char s1[] = "         ";
	// char *trim2 = " ";
	// char *s = ft_end(str, trim, ft_strlen(str), ft_front(str, trim));
	// printf("Check_front :%zu\n", ft_front(str, trim));
	// printf("Check_end :%zu\n", s);
	printf("%s\n", ft_strtrim(str, trim));
	// return (0);
}*/
