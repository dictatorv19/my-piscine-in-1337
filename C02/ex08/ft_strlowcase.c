/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:50:14 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/07 12:50:14 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

#include <stdio.h>

int	main()
{
	char	src[] = "AYOUBBELLA";
	char	sr[] = "aaBBCCDDRRZZ";
	char	s[] = "AaBbCcDdEe";

	printf("lowcase : %s \n", ft_strlowcase(src));
	printf("lowcase : %s \n", ft_strlowcase(sr));
	printf("lowcase : %s \n", ft_strlowcase(s));
	return (0);
}
