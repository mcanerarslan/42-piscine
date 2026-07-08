/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 14:41:11 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 15:01:03 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while((i*i) <= nb)
	{
		if(nb == (i*i))
			return (i);
		i++;
	}
	return (0);
}

#include <stdio.h>

int main(void)
{
    printf("%d",ft_sqrt(17));
}
