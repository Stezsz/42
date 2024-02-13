/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 11:23:27 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/10 11:01:26 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		array[i] = min;
		min++;
		i++;
	}
	return (array);
}

/*int	main(void)
{
	int	min;
	int	max;
	int	*result;

	min = 10;
	max = 100;
	result = ft_range(min, max);
	for (int i = 0; i < max - min; i++)
	{
		printf("%d ", result[i]);
	}
	return (0);
}*/
