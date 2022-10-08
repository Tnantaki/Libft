/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 17:29:07 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/13 07:02:15 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void iter(unsigned int i, char * s)
{
	*s += i;
}

void	ft_repA(unsigned int i, char *str)
{
	*str = 'A';
}

int	main(void)
{
	char str[] = "0000000000";
	printf("%s\n", str);
	ft_striteri(str, iter);
	printf("%s\n", str);
	ft_striteri(str, ft_repA);
	printf("%s\n", str);
}
*/
