/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:08:53 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/27 14:41:24 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;

	i = *a;
	*a = i / *b;
	*b = i % *b;
}

/*int main()
{
	int a = 54;
	int b = 10;
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d\n", b);
	return (0);
}*/
