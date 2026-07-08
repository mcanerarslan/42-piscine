/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:22:30 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 12:49:27 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_fibonacci(int index)
{
    int f_i;
    int n_f;
    
    f_i = 0;

    if ( index < 0)
        return -1;
    if ( index == 0)
        return 0;
    if ((f_i <= index) && f_i != 0)
    {
        n_f += n_f;
    }
    return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
}

int main(void)
{
    printf("%d",ft_fibonacci(10));
}