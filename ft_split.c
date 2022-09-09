/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 09:51:11 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/10 00:01:39 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_countword(char const *s, char c)
{
	size_t	i;
	size_t	cw;

	i = 0;
	cw = 0;
	while (s[i])
	{
		if (s[i] == c || s[i] == '\0')
			cw++;
		i++;
	}
	return (cw);
}

char	*ft_malloc_word(const char *str, char c, int start)
{
	char	*word;
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (str[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		word[i] = str[start + len];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	cw;
	size_t	i;
	size_t	len;
	size_t	start;

	i = 0;
	len = 0;
	start = 0;
	cw = ft_countword(s, c);
	split = malloc(sizeof(char *) * (cw + 1));
	while (i < cw)
	{
		split[i] = ft_malloc_word(s, len, start);
		i++;
	}
	split[i][0] = '\0';
	return (split);
}
/*
#include <stdio.h>
int	main(void)
{
	char *str = "I am the one";
	char c = ' ';
	char **split;
	printf("%d\n", ft_countword(str, c));


	//split = ft_split(str, c);
	
	//for (int i = 0; i < 4; i++)
	 //      printf("%s\n", split[i]);	
	//return (0);
}*/
