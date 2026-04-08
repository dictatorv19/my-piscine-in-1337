/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Ayoub Bella  <bellayo@student.1337.ma>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 20:58:55 by Ayoub Bella       #+#    #+#             */
/*   Updated: 2026/04/07 20:58:55 by Ayoub Bella      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	is_word;
	int	is_after_by_symb;

	i = 0;
	while (str[i])
	{
	is_after_by_symb =((str[i - 1] >= 'a' && str[i - 1] <= 'z')
			|| (str[i - 1] >= 'A' && str[i - 1] <= 'Z')
				|| (str[i - 1] >= '0' && str[i - 1] <= '9'));
	is_word = ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'));
		if (is_word)
		{
			if (i == 0 || !(is_after_by_symb))
			{
				if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
				}
			}
			else if (str[i] >= 'A' && str[i] <= 'Z')
				str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}


#include <stdio.h>

int	main()
{
	char	src[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	


	printf("before: %s \n",src);

	printf("after : %s \n",ft_strcapitalize(src));


return (0);
}
