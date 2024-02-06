/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 14:12:20 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/29 16:05:46 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
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
	printf("%d\n", ft_str_is_numeric("testdasd"));
	printf("%d\n", ft_str_is_numeric("1"));
	printf("%d\n", ft_str_is_numeric("test1"));
	printf("%d\n", ft_str_is_numeric(""));
	return (0);
}
