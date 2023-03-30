/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:10:46 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/25 21:32:39 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb <= 1)
		return (1);
	while (i > 1)
	{
		nb *= i - 1;
		i--;
	}
	return (nb);
}
/*int main(void)
{
	printf("%d",ft_iterative_factorial(12));
}*/
