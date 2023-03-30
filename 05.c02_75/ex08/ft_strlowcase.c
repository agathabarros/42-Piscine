/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 21:00:46 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 21:09:57 by agpereir         ###   ########.fr       */
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
/*int main(void)
{
	char str1[] = "Salut les gars Comment WWwww 000 !";
	printf("Original: %s ", str1);
	printf("Final: %s ", ft_strlowcase(str1));

	return (0);
}*/
