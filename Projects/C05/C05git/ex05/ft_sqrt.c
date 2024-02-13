/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 13:23:05 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/04 14:33:19 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	result;

	result = 1;
	while ((result * result) <= nb)
	{
		if (result == 46341)
			return (0);
		if ((result * result) == nb)
			return (result);
		result++;
	}
	return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_sqrt(4));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(7));
	printf("%d\n", ft_sqrt(81));
	return (0);
}*/
