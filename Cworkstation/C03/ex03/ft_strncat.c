/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: strodrig <strodrig@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:44:22 by strodrig          #+#    #+#             */
/*   Updated: 2024/01/30 10:25:51 by strodrig         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	s;
	unsigned int	d;

	s = 0;
	d = 0;
	if (nb < 1)
	{
		return (dest);
	}
	while (dest[d] != '\0')
	{
		d++;
	}
	while (src[s] != '\0' && s < nb)
	{
		dest[d + s] = src[s];
		s++;
	}
	dest[d + s] = '\0';
	return (dest);
}

int	main(void)
{
	char	src[] = "mundo";
	char	dest[] = "ola ";

	printf("%s\n", ft_strncat(dest, src, 7));

}
