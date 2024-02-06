/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 12:58:27 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/03 13:20:07 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 1 || index == 2)
		return (1);
	if (index > 2)
		return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
	else
		return (0);
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_fibonacci(5));
	return (0);
}*/
