/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 21:11:35 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/07 16:43:55 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)str + i);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)str + i);
	return (0);
}
/*
int	main(void)
{
	size_t i = 0;
	char *str = "Hello how are you";
	char c = 0;

	printf("%s\n", strchr(str, c));
	printf("%s\n", ft_strchr(str, c));	
	write(1, str, 18);
	write(1, ft_strchr(str, c), 18);

}*/
