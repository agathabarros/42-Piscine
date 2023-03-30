/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuz2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 17:08:06 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/29 17:19:38 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(void)
{
	int nb;
	int div;
	int mod;

	nb = 1;
	while (nb <= 100)
	{
		if(nb % 3 == 0 && nb % 5 == 0)
			write (1, "fizzbuzz", 8);
		else if(nb % 3 == 0)
			write(1, "fizz", 4);
		else if(nb % 5 == 0)
			write(1, "buzz", 4);
		else 
		{
			if (nb >= 10)
			{
				div = nb / 10 + '0';
				mod = nb % 10 + '0';
				write(1, &div, 1);
				write(1, &mod, 1);
			}
			if (nb <= 9)
			{
			mod = nb % 10 + '0';
			write(1, &mod, 1);
			}
		}
		write(1, "\n", 1);
		nb++;
	}
	return(nb);
}
