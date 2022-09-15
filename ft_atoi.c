/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/31 23:02:01 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/12 09:35:44 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	negative;
	int	i;

	i = 0;
	nb = 0;
	negative = 1;
	while ((str[i] && str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] && (str[i] == '+'))
		i++;
	else if (str[i] && (str[i] == '-'))
	{
		negative = -1;
		i++;
	}
	while (str[i] && ft_isdigit(str[i]))
		nb = nb * 10 + (str[i++] - '0');
	return (nb * negative);
}

int	main(void)
{
	printf("atoi\t: %d\n",atoi("   123982p322"));	
	printf("ft_atoi\t: %d\n",ft_atoi("   123982p322"));
	printf("\n");
	printf("atoi\t: %d\n",atoi("   +12389 2309"));	
	printf("ft_atoi\t: %d\n",ft_atoi("   +12389 2309"));
	printf("\n");
	printf("atoi\t: %d\n",atoi("    -4294967297"));
	printf("ft_atoi\t: %d\n",ft_atoi("    -4294967297"));
	printf("atoi\t: %d\n",atoi("   -2147483648"));	
	printf("ft_atoi\t: %d\n",ft_atoi("   -2147483648"));
	printf("\n");
}
