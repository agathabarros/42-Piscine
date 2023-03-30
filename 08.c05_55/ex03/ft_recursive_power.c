/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 22:58:26 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/25 22:58:30 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	i;	

	i = 1;
	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
