/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/03 15:26:36 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/03 15:42:40 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(str);
	if ((char)c == '\0')
		return ((char *)str + len);
	while (len--)
	{
		if ((char)c == ((char *)str)[len])
			return ((char *)str + len);
	}
	return (0);
}
