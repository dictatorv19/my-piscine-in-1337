/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 12:25:01 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/07 12:25:01 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if (str[i] < 32 || str[i] > 126)
			return (0);
		i++;
	}
	return (1);
}

#include <stdio.h>

int	main()
{
	char	src[] = "Ayou 89 , ?/ al.z *&^%$#@@";
	char	sr[] = "Ayobuf\nsd24";
	char	s[] = "";

	printf("printable characters : %d \n",ft_str_is_printable(src));
	printf("printable with non printable  : %d \n",ft_str_is_printable(sr));
	printf("empty : %d \n",ft_str_is_printable(s));
	return (0);
}
