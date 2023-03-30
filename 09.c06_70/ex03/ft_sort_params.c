/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 17:24:55 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/26 17:27:08 by agpereir         ###   ########.fr       */
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
	write (1, "\n", 1);
}
/*char	ft_swap(char *a, char *b)
{
	char	*temp;

	&temp = *a;
	*a = *b;
	*b = &temp;
}*/

int	ft_strcmp(char *s1, char *s2)
{
	int	x;

	x = 0;
	while (s1[x] != '\0' && s2[x] != '\0' && s1[x] == s2[x])
	{
		x++;
	}
	return (s1[x] - s2[x]);
}

int	main(int ac, char *av[])
{
	int		i;
	int		j;
	char	*temp;

	i = 0;
	while (++i < ac)
	{
		j = 0;
		while (++j < ac)
		{
			if (ft_strcmp(av[j], av[i]) < 0)
			{
				temp = av[j];
				av[j] = av[i];
				av[i] = temp;
			}
			i++;
		}
		j++;
	}
	i = 0;
	while (++i < ac)
		ft_putstr(av[i]);
}
