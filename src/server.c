/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 20:30:15 by imatek            #+#    #+#             */
/*   Updated: 2024/07/30 19:03:07 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_receive_message(char *str, siginfo_t *info)
{
	ft_putendl_fd(str, 1);
	free(str);
	kill(info->si_pid, SIGUSR2);
}

void	ft_handle_sigint(int sig)
{
	if (sig == SIGINT)
	{
		ft_printf("\nServer Close\n");
		exit(0);
	}
}

static void	ft_handle_usr(int sig, siginfo_t *info, void *context)
{
	static unsigned int	bit;
	static char			c;
	static char			*str;

	(void)context;
	if (sig == SIGUSR1)
		c |= (1 << bit);
	bit++;
	if (bit == 8)
	{
		if (c == '\0')
		{
			ft_receive_message(str, info);
			str = NULL;
			bit = 0;
			return ;
		}
		if (!str)
			str = ft_strdup(&c);
		else
			str = ft_strjoin_free(str, &c);
		bit = 0;
		c = 0;
	}
	kill(info->si_pid, SIGUSR1);
}

int	main(void)
{
	int					pid;
	struct sigaction	act;

	pid = getpid();
	ft_printf("Server PID: %d\n", pid);
	ft_bzero(&act, sizeof(act));
	act.sa_flags = SA_SIGINFO;
	act.sa_sigaction = ft_handle_usr;
	sigaction(SIGUSR1, &act, NULL);
	sigaction(SIGUSR2, &act, NULL);
	signal(SIGINT, ft_handle_sigint);
	while (1)
		pause();
	return (0);
}
