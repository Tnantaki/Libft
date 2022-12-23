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
	size_t	len;
	char	*str1;
	char	care;

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
