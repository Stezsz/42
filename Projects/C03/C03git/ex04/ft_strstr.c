/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:44:23 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/30 16:51:12 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	unsigned int	s;
	unsigned int	t;

	s = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[s] != '\0')
	{
		t = 0;
		while (str[s + t] == to_find[t])
		{
			if (to_find[t + 1] == '\0')
			{
				return (str + s);
			}
			t++;
		}
		s++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "ateaatesteaa";
	char	find[] = "teste";

	printf("%s\n", ft_strstr(str, find));
	return (0);
}*/
