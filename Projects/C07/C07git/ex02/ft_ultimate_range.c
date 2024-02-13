/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 15:02:44 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/10 15:09:19 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	array = (int *)malloc(sizeof(int) * (max - min));
	if (array == NULL)
		return (-1);
	else
	{
		i = 0;
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		*range = array;
		return (i);
	}
}

/* #include <stdio.h>

int	main(void)
{
	int	*result;
	int	size;
	int	min_value;
	int	max_value;

	min_value = 5;
	max_value = 15;
	size = ft_ultimate_range(&result, min_value, max_value);
	for (int i = 0; i < size; i++)
	{
		printf("%d ", result[i]);
	}
	printf("\n");
	return (0);
} */
