/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 12:40:34 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/14 12:47:01 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int main (void)
{
	int a;
	int b;
	int div;
	int mod;
	
	a = 90;
	b = 4; 
	div = 0;
	mod = 0;
	ft_div_mod(a, b, &div, &mod);
	printf("%d\n%d\n", div, mod);
	return(0);
}*/
