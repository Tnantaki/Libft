/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tnantaki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/05 15:17:15 by tnantaki          #+#    #+#             */
/*   Updated: 2022/09/06 19:54:27 by tnantaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && i + 1 < n)
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>
int	main()
{
	char *s1 = "t";
	char *s2 = "";
	printf("%d\n", strncmp(s1, s2, 0));
	printf("%d\n", ft_strncmp(s1, s2, 0));
}*/
