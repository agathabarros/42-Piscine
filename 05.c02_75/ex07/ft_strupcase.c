/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 20:28:13 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 20:55:24 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if ((str[x] >= 'a') && (str[x] <= 'z'))
			str[x] -= 32;
		x++;
	}
	return (str);
}
/*int main(void)
{
	char str1[] = "Salut les gars Comment WWwww 000 !";
	printf("Original: %s ", str1);
	printf("Final: %s ", ft_strupcase(str1));

	return (0);
}*/
