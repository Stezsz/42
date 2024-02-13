/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:44:20 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/30 10:28:00 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
	{
		return (0);
	}
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	if (s1[i] == s2[i])
	{
		return (0);
	}
	else
	{
		return (s1[i] - s2[i]);
	}
}

/*#include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_strcmp("test", "test1"));
	printf("%d\n", ft_strcmp("test", "te"));
	printf("%d\n", ft_strcmp("te", "test"));
	printf("%d\n", ft_strcmp("Test", "Test"));
}*/
