/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 20:52:18 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/15 21:43:58 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdlib.h>*/
/*#include <stdio.h>*/

void	ft_swap(int *x, int *y)
{
	int	temp;

	temp = *x;
	*x = *y;
	*y = temp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		x = tab [i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = x;
		i ++;
	}
}
/*int	main(void)
{
	int *tab;
	int counter;

	tab = calloc(5, sizeof(int));
	counter = 0;
	while (counter < 5)
	{
		tab[counter] = counter;
		counter++;
	}
	counter = 0;
	while (counter < 5)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	ft_rev_int_tab(tab, 5);
	counter = 0;
	while (counter < 5)
	{
		printf("%d ", tab[counter]);
		counter++;
	}
	printf("\n");
	return (0);
}*/
