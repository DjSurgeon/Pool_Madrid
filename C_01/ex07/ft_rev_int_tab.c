/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:57:16 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/13 16:58:08 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	swap;
	int	*rev_tab;
	int	i;
	int	j;

	i = *tab;
	j = size - 1;
	while (i < size)
	{
		swap = tab[i];
		tab[i] = rev_tab[j];
		rev_tab[j] = swap;
		i++;
		j--;
	}
}

int main (void)
{
	int	size;
	int	tab[size];

	size = 6;
	tab[size] = {10, 52, 35, 61, 7, 47};
	ft_rev_int_tab(tab, size);
	return (0);
}
