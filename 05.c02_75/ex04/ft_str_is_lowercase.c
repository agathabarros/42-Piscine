/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 17:31:56 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 17:47:37 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0' )
	{
		if ((str[x] >= 'a') && (str[x] <= 'z'))
		{
			x++;
		}
		else
			return (0);
	}
	return (1);
}
/*int     main()
{
	    	printf("%d", ft_str_is_lowercase("55421542"));
		    	printf("\n%d", ft_str_is_lowercase("abdefghijkl"));
			    	printf("\n%d", ft_str_is_lowercase("-_123AA423253gfsfgs"));

}*/
