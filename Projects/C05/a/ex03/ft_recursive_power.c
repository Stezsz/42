/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:47:54 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/03 12:57:51 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power > 1)
		return (result * ft_recursive_power(result, power -1));
	else
		return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_recursive_power(10, -1));
	printf("%d\n", ft_recursive_power(10, 0));
	printf("%d\n", ft_recursive_power(10, 1));
	printf("%d\n", ft_recursive_power(10, 2));
	return (0);
}*/
