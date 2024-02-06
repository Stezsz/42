/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:31:31 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/04 14:30:06 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (nb > i)
	{
		if (nb % i == 0)
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	if (nb >= 2)
	{
		while (ft_is_prime(nb) == 0)
		{
			nb++;
		}
		return (nb);
	}
	return (0);
}

/*#include <stdio.h>
int	main(void)
{
   printf("%d\n", ft_find_next_prime(10));
   return (0);
}*/
