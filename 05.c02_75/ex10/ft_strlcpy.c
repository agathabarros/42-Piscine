/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 23:36:23 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/19 12:22:31 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str [a] != '\0')
	{
		a++;
	}
	return (a);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	x;
	unsigned int	y;

	x = ft_strlen(src);
	y = 0;
	if (size != 0)
	{
		while (src[y] != '\0' && y < size - 1)
		{
			dest[y] = src[y];
			y++;
		}
		dest[y] = '\0';
	}
	return (x);
}
/*int	main()
{
	char src[] = "World!";
	char dest[] = "Hello ";
	printf("%d | %s", ft_strlcpy(dest, src, 10), dest);
}*/
