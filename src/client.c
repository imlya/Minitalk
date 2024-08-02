/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:30:18 by imatek            #+#    #+#             */
/*   Updated: 2024/07/30 18:52:52 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_conf_signal(int sig)
{
	if (sig == SIGUSR1)
		g_conf = 0;
	if (sig == SIGUSR2)
	{
		ft_printf("Received\n");
		exit(0);
	}
}

void	ft_send_char(char c, int pid)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if (c & 1)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		c >>= 1;
		bit++;
		while (g_conf == 1)
			usleep(100);
		g_conf = 1;
	}
}

int	main(int ac, char **av)
{
	int	pid;

	if (ac == 3)
	{
		pid = atoi(av[1]);
		signal(SIGUSR1, ft_conf_signal);
		signal(SIGUSR2, ft_conf_signal);
		while (*av[2])
		{
			ft_send_char(*av[2], pid);
			av[2]++;
		}
		ft_send_char('\0', pid);
		return (0);
	}
	ft_printf("Try: ./client [PID] [message]\n");
	return (1);
}
