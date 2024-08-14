/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hello_world.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 15:41:50 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/14 16:24:08 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_hello_world(void);

void	ft_hello_world(void)
{
	char	*str;

	str = "Hello World!";
	write(1, str, 12);
}

int	main(void)
{
	ft_hello_world();
	return (0);
}
