/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/18 15:23:03 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/18 15:53:31 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	x;

	x = 0;
	if (str[x] == '\0')
	{
		return (1);
	}
	while (str[x] != '\0')
	{
		if (((str[x] >= 'a') && (str[x] <= 'z'))
			|| ((str[x] >= 'A') && (str[x] <= 'Z')))
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
    	printf("%d", ft_str_is_alpha("abcdefghijkl"));
    	printf("\n%d", ft_str_is_alpha("ab1defghijkl"));
    	printf("\n%d", ft_str_is_alpha("-_123423253gfsfgs"));

}*/
