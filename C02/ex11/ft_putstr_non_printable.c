/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 14:52:43 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/08 14:52:43 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*hex;

	hex = "0123456789abcdef";
	i = 0;
	while (str[i])
	{
		if (str[i] > 31 && str[i] < 127)
		{
			ft_putchar(str[i]);
		}
		else if (!(str[i] > 31 && str[i] < 127))
		{
			write(1, "\\", 1);
			write(1, &hex[str[i] / 16], 1);
			write(1, &hex[str[i] % 16], 1);
		}
		i++;
	}
}

int	main(void)
{
	char	*src;	

	src = "Coucou\ntu vas bien ?";
	printf("original : %s \n", src);
	ft_putstr_non_printable(src);
	return (0);
}
