/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:48:37 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/30 11:54:16 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(int ac, char **av)
{
	int j;

	if (ac == 2)
	{
		j = ft_strlen(av[1]);
		j = j - 1;
		while (av[1][j] != '\0')
		{
			write(1, &av[1][j], 1);
				j--;
		}
	}
	write (1, "\n", 1);
	return(0);
}


