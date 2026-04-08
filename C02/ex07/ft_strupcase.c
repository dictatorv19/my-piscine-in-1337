/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:40:29 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/07 12:40:29 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char	str[] = "Ayoub";
	char	st[] = "AYoub";
	char	s[] = "aaaaa";
	char	ss[] = "cascC";
	char	sss[] = "aaaalllddmddnniinnssllsd";

	printf("strupcase : %s \n", ft_strupcase(str));
	printf("strupcase : %s \n", ft_strupcase(st));
	printf("strupcase : %s \n", ft_strupcase(s));
	printf("strupcase : %s \n", ft_strupcase(ss));
	printf("strupcase : %s \n", ft_strupcase(sss));
	return (0);
}
