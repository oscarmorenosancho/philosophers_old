/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_event.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omoreno- <omoreno-@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:32:16 by omoreno-          #+#    #+#             */
/*   Updated: 2023/01/27 16:37:41 by omoreno-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	ft_print_event(t_philo_info *pi, t_timestamp *ts, char *s)
{
	time_t		te;

	te = ft_time_diff(pi->initial_ts, ts);
	printf("%lu %d %s\n", te, pi->id, s);
}
