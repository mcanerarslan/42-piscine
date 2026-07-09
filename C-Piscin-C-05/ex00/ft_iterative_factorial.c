/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 09:48:47 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/09 08:38:25 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	fct;

	i = 1;
	fct = 1;
	if (nb < 0)
		return (0);
	while (i++ < nb)
		fct *= i;
	return (fct);
}
