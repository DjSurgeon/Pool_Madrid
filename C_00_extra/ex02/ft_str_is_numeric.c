/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: DjSurgeon <djsurgeon83@gmail.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 17:09:44 by DjSurgeon         #+#    #+#             */
/*   Updated: 2024/08/14 17:35:41 by DjSurgeon        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str);

int	ft_str_is_numeric(char *str)
{
	int	n;

	n = 0;
	if (str[n] != '\0')
	{
		while (str[n] <= '0' || str[n] >= '9')
		{
			n++;
		}
		return (1);
	}
	else
	{
	return (0);
	}
}

int	main(void)
{
	char str1[] = "12345";
	char str2[] = "12DF5";
	char str3[] = "asdf";
	int	n1;
	int	n2;
	int	n3;

	n1 = ft_str_is_numeric(str1) + '0';
	write(1, &n1, 1);
	n2 = ft_str_is_numeric(str2) + '0';
	write(1, &n2, 1);
	n3 = ft_str_is_numeric(str3) + '0';
	write(1, &n3, 1);
	return (0);
}
