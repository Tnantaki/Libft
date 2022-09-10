/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 11:15:17 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/10 16:48:07 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	ft_countlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	while (n > 9)
	{
		n /= 10;
		len++;
	}
	if (n < 9)
		len++;
	return (len);
}

char	*ft_itoa(int n)
{
	int		sign;
	int		lennb;
	char	*nb;

	sign = 0;
	lennb = ft_countlen(n);
	nb = malloc(sizeof(char) * lennb + 1);
	nb[lennb--] = '\0';
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	while (n > 9)
	{
		nb[lennb--] = (n % 10) + '0';
		n /= 10;
	}
	if (n < 10)
		nb[lennb--] = n + '0';
	if (sign)
		nb[lennb] = '-';
	return (nb);
}	
/*
#include <stdio.h>
int	main(void)
{
	int nb = -8234238;
	char *nbr = ft_itoa(nb);
	printf("lennb: %d\n", ft_countlen(nb));
	printf("%s\n", nbr);
	int	i;
	int	i;
}*/
