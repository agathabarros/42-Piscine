/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 21:59:05 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/25 22:18:36 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;	

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	while (power > 0)
	{
		i = i * nb;
		power--;
	}
	return (i);
}
/*int main(void)
{
	printf("%d", ft_iterative_power(-2, 4));
}*/
