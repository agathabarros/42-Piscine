/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 17:34:34 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/21 13:05:48 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)

{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}
/*int 	main(void)
{
	printf("%d\n", ft_strcmp("casa","caSa"));
	printf("%d\n", strcmp("casa","caSa"));	
}*/
