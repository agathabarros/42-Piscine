/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 16:37:24 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 17:18:56 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if ((str[x] >= '0') && (str[x] <= '9'))
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
	    	printf("%d", ft_str_is_numeric("55421542"));
		    	printf("\n%d", ft_str_is_numeric("ab1defghijkl"));
			    	printf("\n%d", ft_str_is_numeric("-_123423253gfsfgs"));

}*/
