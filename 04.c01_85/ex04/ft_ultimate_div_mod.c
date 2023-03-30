/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 13:09:48 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/14 15:29:25 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;

	x = *a;
	y = *b;
	*a = x / y;
	*b = x % y;
}
/*int	main(void)
{
	int *a;
	int *b;
	int x;
	int y;
	
	x = 10;
	y = 2;

	a = &x;
	b = &y;
	ft_ultimate_div_mod(a, b);
	printf("%d, %d\n", x, y);
	return(0);
}*/
