/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 17:59:32 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/06 17:59:32 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while  (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z') && !(str[i] >= 'A' && str[i] <= 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
#include <stdio.h>

int	main ()
{
	char str[] = "ayoubgood";
	char st[] = "";
	char s[] = "ayoubbella234";

	//ft_str_is_alpha(str);
	printf("only characters %d \n ", ft_str_is_alpha(str));
	printf("empty %d \n", ft_str_is_alpha(st));
	printf("melange %d \n ", ft_str_is_alpha(s));
	return 0;
}*/
