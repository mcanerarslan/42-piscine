/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/25 17:17:46 by maarslan          #+#    #+#             */
/*   Updated: 2026/06/26 09:44:36 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char value)
{
	write (1, &value, sizeof(value));
}

void	ft_print_comb2(void)
{
	int	digit1;
	int	digit2;

	digit1 = 0;
	while (digit1 <= 98)
	{
		digit2 = digit1 + 1;
		while (digit2 <= 99)
		{
			ft_putchar(digit1 / 10 + '0');
			ft_putchar(digit1 % 10 + '0');
			write (1, " ", 1);
			ft_putchar(digit2 / 10 + '0');
			ft_putchar(digit2 % 10 + '0');
			if (!(digit1 == 98 && digit2 == 99))
			{
				write (1, ", ", 2);
			}
			digit2++;
		}
		++digit1;
	}
}

int main(void){
	ft_print_comb2();
}
