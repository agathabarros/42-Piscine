/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 16:07:18 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/26 16:07:22 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *i)
{
	int	j;

	j = 0;
	while (i[j] != '\0')
	{
		write(1, &i[j], 1);
		j++;
	}
}

int	main(int ac, char **av)
{
	int	i;

	i = 1;
	if (ac > 1)
	{
		while (av[i])
		{
			ft_putstr(av[i]);
			write(1, "\n", 1);
			i++;
		}
	}
}
