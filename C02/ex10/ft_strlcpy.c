/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:00:34 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/30 09:55:53 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	count;

	i = 0;
	count = 0;
	while (src[count] != '\0')
	{
		count++;
	}
	if (size < 1)
	{
		return (count);
	}
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (count);
}
/*int	main(void)
{
	char			src[] = "test";
	char			dest[] = "TEST";
	unsigned int	size;

	size = sizeof(dest) / sizeof(dest[0]);
	printf("%d | %s\n", ft_strlcpy(dest, src, size), dest);
	return (0);
}*/
