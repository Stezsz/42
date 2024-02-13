/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 10:57:31 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/03 12:37:02 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	while (nb > 1)
	{
		result = result * nb;
		nb--;
	}
	return (result);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_iterative_factorial(4));
	return (0);
}*/
