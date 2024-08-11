/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/11 18:06:40 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/11 18:07:04 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n);

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n >= 0)
		write(1, &positive, 1);
	else
		write(1, &negative, 1);
}

int	main(void)
{
	ft_is_negative(15);
	write(1, "\n", 1);
	ft_is_negative(-85);
	write(1, "\n", 1);
	ft_is_negative(7489);
	return (0);
}
