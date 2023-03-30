/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 18:02:58 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 18:03:56 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0' )
	{
		if ((str[x] >= 'A') && (str[x] <= 'Z'))
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
	    	printf("%d", ft_str_is_uppercase("ADFKSDF"));
		    	printf("\n%d", ft_str_is_uppercase("abdefghijkl"));
			    	printf("\n%d", ft_str_is_uppercase("-_123AA423253gfsfgs"));

}*/
