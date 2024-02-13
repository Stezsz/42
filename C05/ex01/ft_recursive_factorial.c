/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 11:42:41 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/03 12:41:33 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 0;
	if (nb < 0)
		return (0);
	else if (nb <= 1)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d", ft_recursive_factorial(4));
	return (0);
}*/
