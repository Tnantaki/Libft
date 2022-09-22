/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:26:36 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/22 10:41:08 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	len;
	char	*str1;
	char	care;

	i = 0;
	len = ft_strlen(str);
	str1 = (char *)str;
	care = (char)c;
	if (c == '\0')
		return (str1 + len);
	while (len--)
	{
		if (care == str1[len])
			return (str1 + len);
	}
	return (0);
}
/*
int	main(void)
{
	char *s = "hello";
	char *s1 = "";
	char *s2 = "\\\\aa";
	char *s3 = "";
	char *s4 = NULL;

	printf("ft_strrchr\t%s\n", ft_strrchr(s, 'e'));
	printf("strrchr\t\t%s\n", strrchr(s, 'e'));
	printf("\n");
	printf("ft_strrchr\t%s\n", ft_strrchr(s, '0'));
	printf("strrchr\t\t%s\n", strrchr(s, '0'));
	printf("\n");
	printf("ft_strrchr\t%s\n", ft_strrchr(s1, ' '));
	printf("strrchr\t\t%s\n", strrchr(s1, ' '));
	printf("\n");
	printf("ft_strrchr\t%s\n", ft_strrchr(s2, '\\'));
	printf("strchr\t\t%s\n", strrchr(s2, '\\'));
	printf("\n");
	printf("ft_strrchr\t%s\n", ft_strrchr(s3, 'a'));
	printf("strchr\t\t%s\n", strrchr(s3, 'a'));
}*/
