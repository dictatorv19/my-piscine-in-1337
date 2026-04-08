/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 22:42:09 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/06 22:42:09 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main ()
{
	char	src[] = "8080808";
	char	sr[] = "ayoub980808";
	char	s[] = "";
	
	printf("the numbers is %d \n", ft_str_is_numeric(src));
	printf("the alpha and numbers is %d\n", ft_str_is_numeric(sr));
	printf("the empty %d\n", ft_str_is_numeric(s));
	return (0);
}
