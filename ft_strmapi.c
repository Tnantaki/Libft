/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 08:26:20 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/15 19:24:29 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;
	size_t	len;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
/*
char	ft_toupcase(unsigned int i, char c)
{
	char	tmp;

	tmp = c - 32;
	return (tmp);
}

char	ft_decrypt_caesar_cipher(unsigned int i, char c)
{
	char	tmp;

	tmp = c + 3;
	return (tmp);
}

int	main()
{
	char *str1 = ft_strmapi("hello", ft_toupcase);
	char *str2 = ft_strmapi("ebiil", ft_decrypt_caesar_cipher);
	printf("uppcase \t\t:%s\n",str1);
	printf("decrypt_caesar_cipher \t:%s\n",str2);
}
*/
