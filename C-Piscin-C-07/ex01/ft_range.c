/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 15:54:29 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/12 16:17:31 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*numbers;
	int	i;

	if (min >= max)
		return (NULL);
	numbers = malloc((max - min) * sizeof(int));
	i = 0;
	while (i < (max - min))
	{
		numbers[i] = min + i;
		i++;
	}
	return (numbers);
}
