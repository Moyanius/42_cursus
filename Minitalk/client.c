/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmoyano- <jmoyano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/30 18:40:41 by jmoyano-          #+#    #+#             */
/*   Updated: 2022/09/06 20:18:50 by jmoyano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

#define DELAY 5000

static void	send_msg(int pid, char *str)
{
	int	pos;
	int	len;
	int	i;

	len = ft_strlen(str);
	i = -1;
	while (++i <= len)
	{
		pos = -1;
		while (++pos < 7)
		{
			if ((str[i] >> pos) & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(DELAY);
		}
	}
}

int	main(int ac, char **av)
{
	if (ac != 3)
	{
		ft_putstr_fd("Usage: client <PID> <string>\n", 1);
		exit(EXIT_FAILURE);
	}
	send_msg(ft_atoi(av[1]), av[2]);
}
