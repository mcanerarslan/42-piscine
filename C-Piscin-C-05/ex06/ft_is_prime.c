/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 15:01:51 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 19:43:37 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_is_prime(int nb)
{
    int i;

    if(nb <= 1)
        return 0;
    i = 2;
    while (i <= nb / i)
    {
        if(nb % i == 0)
            return(0);
        i++;
    }
    return(1);
}

#include <stdio.h>
int main(void)
{
    printf("%d \n",ft_is_prime(2147483647));
}