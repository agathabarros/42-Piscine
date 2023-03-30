/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 12:09:14 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 12:40:01 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	x;

	x = 0;
	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}
	dest[x] = src[x];
	return (dest);
}
/*int	main(void)
{
	char	str1[]="agatha";
	char	str2[]="barros";

	printf("%s\n", str1);
	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	strcpy(str1, str2);
	
	printf("%s\n", str2);
	return(0);
}*/
