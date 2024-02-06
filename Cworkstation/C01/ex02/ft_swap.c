/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 19:03:36 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/27 14:40:46 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*int main()
{
	int a = 12;
	int b = 31;
	ft_swap(&a ,&b);
	printf("%d\n", b);
	return (0);
}*/
