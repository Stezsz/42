/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 17:53:41 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/03 18:29:41 by strodrig         ###   ########.fr       */
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

/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_is_prime(7));
	return (0);
}*/
