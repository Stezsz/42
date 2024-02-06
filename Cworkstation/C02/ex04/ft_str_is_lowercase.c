/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 15:54:32 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/29 16:05:53 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(void)
{
	printf("%d\n", ft_str_is_lowercase("test"));
	printf("%d\n", ft_str_is_lowercase("tesT"));
	printf("%d\n", ft_str_is_lowercase("te3t"));
	printf("%d\n", ft_str_is_lowercase(""));
	return (0);
}
