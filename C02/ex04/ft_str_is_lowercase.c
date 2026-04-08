/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 23:16:53 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/06 23:16:53 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while(str[i])
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= '0' && str[i] <= '9'))
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
	char	src[] = "ayoubbella";
	char	sr[] = "ayoubbellA";
	char	s[] = "ayoubbella4";
	char	ss[] = "";

	printf("lowercase %d\n", ft_str_is_lowercase(src));
	printf("containe other charac %d\n", ft_str_is_lowercase(sr));
	printf("containe other charactere %d\n", ft_str_is_lowercase(s));
	printf("empty %d\n", ft_str_is_lowercase(ss));
	return (0);
}
