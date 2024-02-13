/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:14:10 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:14:11 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	init_xy(int *x, int *y)
{
	*x = 0;
	*y = 0;
}

void	xy_operation(int *x, int *y, t_data *data)
{
	if (*x == data->map_x * 64)
	{
		*x = 0;
		*y += 64;
	}
	else
		*x += 64;
}

void	render_after_move(t_data *data)
{
	mlx_clear_window(data->mlx, data->window);
	put_image(data);
}

int	check_movement(t_data *data, int x, int y)
{
	if (data->map2[y][x] != '1')
	{
		if (data->map2[y][x] == 'C')
			data->food_count--;
		else if (data->food_count == 0 && data->map2[y][x] == 'E')
		{
			ft_printf("Move: %d\nCongratulations!", ++(data->move_count));
			free_map(data);
			mlx_destroy_window(data->mlx, data->window);
			free(data->mlx);
			exit(EXIT_SUCCESS);
		}
		if (data->map2[y][x] == 'E')
			return (0);
		ft_printf("Move: %d\n", ++(data->move_count));
		return (1);
	}
	return (0);
}

void	count_check(t_data *data)
{
	if (data->food_count < 1 || data->exit_count != 1
		|| data->player_count != 1)
		ft_error("Error\nCheck exit, player and coin counts.\n", data);
}
