/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_to_upper.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 16:29:15 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/14 17:08:10 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_str_to_upper(char *str);

void	ft_str_to_upper(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	char	str[] = "helloworld";

	ft_str_to_upper(str);
	return (0);
}
