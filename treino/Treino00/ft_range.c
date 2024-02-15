/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 18:28:06 by strodrig          #+#    #+#             */
/*   Updated: 2024/02/07 18:46:29 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i;
	int	*array;

	i = 0;
	if (end >= start)
	{
		array = malloc(sizeof(int) * (end - start + 1));
		while (start <= end)
		{
			array[i] = start;
			i++;
			start++;
		}
		return (array);
	}
	else
	{
		array = malloc(sizeof(int) * (start - end + 1));
		while (end <= start)
		{
			array[i] = end;
			i++;
			end++;
		}
		return (array);
	}
}

int	main(void)
{
	int	start;
	int	end;
	int	*result;

	start = 0;
	end = -3;
	result = ft_range(start, end);
	if (end >= start)
	{
		for (int i = 0; i < end - start + 1; i++)
		{
			printf("%d ", result[i]);
		}
	}
	else
	{
		for (int i = 0; i < start - end + 1; i++)
		{
			printf("%d ", result[i]);
		}
		return (0);
	}
}
