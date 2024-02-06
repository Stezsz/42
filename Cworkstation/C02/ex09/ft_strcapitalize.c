/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 10:33:57 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/30 19:10:53 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	upper;

	i = 0;
	upper = 1;
	ft_strlowcase(str);
	while (str[i] != '\0')
	{
		if (upper == 1 && str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
		}
		if (str[i] < 48 || (str[i] > 57 && str[i] < 65) || (str[i] > 90
				&& str[i] < 97) || str[i] > 122)
		{
			upper = 1;
		}
		else
		{
			upper = 0;
		}
		i++;
	}
	return (str);
}
int	main(void)
{
	char	str[] = "oi, tudo bem? 42palAvras quarenta-e-duas; cinquenta+e+um";

	printf("%s\n", ft_strcapitalize(str));
}
