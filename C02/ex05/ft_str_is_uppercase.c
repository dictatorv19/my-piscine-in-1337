/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:13:45 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/07 12:13:45 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char	src[] = "AYOUBBELLA";
	char	sr[] = "AYOUB1345";
	char	s[] = "";

	printf("uppercase only : %d\n", ft_str_is_uppercase(src));
	printf("uppercase and numbers : %d\n", ft_str_is_uppercase(sr));
	printf("empty : %d\n", ft_str_is_uppercase(s));
	return (0);
}
