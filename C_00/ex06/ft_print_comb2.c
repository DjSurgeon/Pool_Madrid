/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:10:07 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/11 18:11:58 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchars(int a, int b);
void	ft_print_comb2(void);

void	ft_putchars(int a, int b)
{
	char	c[5];

	c[0] = (a / 10) + '0';
	c[1] = (a % 10) + '0';
	c[2] = ' ';
	c[3] = (b / 10) + '0';
	c[4] = (b % 10) + '0';
	write(1, c, 5);
	if (!(a == 98 && b == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_putchars(x, y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
