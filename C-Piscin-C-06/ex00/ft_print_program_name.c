/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maarslan <maarslan@student.42kocaeli.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 20:53:20 by maarslan          #+#    #+#             */
/*   Updated: 2026/07/08 20:53:21 by maarslan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// int main(int argc, char **argv)
int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	(void)argc;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
}
