/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 16:53:32 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/13 16:54:29 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ft(int *nbr);
void	ft_putchar(char c);

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(void)
{
	int	i;

	i = 54;
	ft_putchar(i);
	ft_ft(&i);
	ft_putchar(i);
	return (0);
}
