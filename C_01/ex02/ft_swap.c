/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:56:28 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/13 16:56:43 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

int	main(void)
{
	int	a;
	int	b;

	a = 24;
	b = 33;
	printf("El valor de a es: %i y b: %i\n", a, b);
	ft_swap(&a, &b);
	printf("El nuevo valor de a es: %i y b: %i", a, b);
	return (0);
}
