/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:39:01 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/26 16:40:33 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *s)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write (1, &s[i], 1);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = ac - 1;
	if (ac > 1)
	{
		while (i >= 1)
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i--;
		}
	}
}
