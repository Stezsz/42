/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 10:03:06 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/26 12:01:28 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int div;
	int mod;
	int a = 42;
	int b = 10;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n", div);
	printf("%d\n", mod);
}*/
