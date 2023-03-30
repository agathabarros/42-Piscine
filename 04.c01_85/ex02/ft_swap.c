/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agpereir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:47:33 by agpereir          #+#    #+#             */
/*   Updated: 2023/03/13 21:55:22 by agpereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/* #include <stdio.h> */
/* #include <stdlib.h> */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/* int	main(void)
{
	int *a;
	int *b;

	a = calloc(10, sizeof(int));
	b = calloc(10, sizeof(int));
	*a = 5;
	*b = 9;

	
	ft_swap(a, b);
	printf("%d, %d\n", *a, *b);
	return(0);
} */
