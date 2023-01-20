/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 15:38:13 by omoreno-          #+#    #+#             */
/*   Updated: 2023/01/20 16:38:04 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	main(int argc, char **argv)
{
	char			*err_msg;
	t_program_data	data;

	memset(&data, 0, sizeof(t_program_data));
	if (argc == 5 || argc == 6)
	{
		ft_take_args(&data, argc, argv);
		ft_init_forks(&data);


		ft_delete_forks(&data);
	}
	else
	{
		err_msg = "Error\nUsage: ./philo <number_of_philosophers> <time_to_die> \
		<time_to_eat> <time_to_sleep> \
		[number_of_times_each_philosopher_must_eat]\n";
		write(2, err_msg, ft_strlen(err_msg));
	}
	return (0);
}