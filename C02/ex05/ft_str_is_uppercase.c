/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 18:14:50 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/29 15:58:23 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
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

/*int	main(void)
{
	printf("%d\n", ft_str_is_uppercase("test"));
	printf("%d\n", ft_str_is_uppercase("TEST"));
	printf("%d\n", ft_str_is_uppercase("te3"));
	printf("%d\n", ft_str_is_uppercase(""));
	return (0);
}*/
