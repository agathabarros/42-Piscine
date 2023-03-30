/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:15:17 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 23:11:29 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'A' && str[x] <= 'Z'))
			str[x] += 32;
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_strlowcase(str);
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a' && str[x] <= 'z'))
		{
			if (y == 1)
				str[x] -= 32;
			y = 0;
		}
		else if (str[x] >= '0' && str[x] <= '9')
			y = 0;
		else
			y = 1;
		x++;
	}
	return (str);
}
/*int main(void)
{
	char str1[] = "salut les gars comment www 000 !";
	printf("Original: %s ", str1);
	printf("Final: %s ", ft_strcapitalize(str1));

	return (0);
}*/
