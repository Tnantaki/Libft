/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:51:11 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/13 17:44:18 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countword(char const *s, char c)
{
	int	i;
	int	cw;

	i = 0;
	cw = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
				cw++;
		}
	}
	return (cw);
}

char	*ft_malloc_word(const char *str, char c, int *start)
{
	char	*word;
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (str[*start] == c)
		*start += 1;
	while (str[*start + len] != c && str[*start + len] != '\0')
		len++;
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[*start + i];
		i++;
	}
	*start += len;
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		cw;
	int		i;
	int		start;

	i = 0;
	start = 0;
	cw = ft_countword(s, c);
	split = (char **)malloc(sizeof(char *) * (cw + 1));
	while (i < cw)
	{
		split[i] = ft_malloc_word(s, c, &start);
		i++;
	}
	split[i] = 0;
	return (split);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	char *str = "  tripouille  42  ";
	char c = ' ';
	printf("len str: %lu\n", strlen(str));
	printf("cw: %d\n", ft_countword(str, c));
	char **split = ft_split(str, c);
	
	for (int i = 0; i < ft_countword(str, c); i++)
		printf("index %d: %s\n", i, split[i]);
	printf("%d\n", (int)split[2]);
	return (0);
}*/
