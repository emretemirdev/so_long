/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:13:34 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:13:36 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	key_event(int key, t_data *data)
{
	if (key == 53)
	{
		free_map(data);
		mlx_destroy_window(data->mlx, data->window);
		free(data->mlx);
		exit(EXIT_SUCCESS);
	}
	check_up(key, data);
	check_down(key, data);
	check_left(key, data);
	check_right(key, data);
	return (0);
}

void	check_up(int key, t_data *data)
{
	if (key == 13)
	{
		if (check_movement(data, data->ply_x, data->ply_y - 1))
		{
			data->map2[data->ply_y][data->ply_x] = '0';
			data->ply_y -= 1;
			data->map2[data->ply_y][data->ply_x] = 'P';
			render_after_move(data);
		}
	}
}

void	check_down(int key, t_data *data)
{
	if (key == 1)
	{
		if (check_movement(data, data->ply_x, data->ply_y + 1))
		{
			data->map2[data->ply_y][data->ply_x] = '0';
			data->ply_y += 1;
			data->map2[data->ply_y][data->ply_x] = 'P';
			render_after_move(data);
		}
	}
}

void	check_left(int key, t_data *data)
{
	if (key == 0)
	{
		if (check_movement(data, data->ply_x - 1, data->ply_y))
		{
			data->map2[data->ply_y][data->ply_x] = '0';
			data->ply_x -= 1;
			data->map2[data->ply_y][data->ply_x] = 'P';
			render_after_move(data);
		}
	}
}

void	check_right(int key, t_data *data)
{
	if (key == 2)
	{
		if (check_movement(data, data->ply_x + 1, data->ply_y))
		{
			data->map2[data->ply_y][data->ply_x] = '0';
			data->ply_x += 1;
			data->map2[data->ply_y][data->ply_x] = 'P';
			render_after_move(data);
		}
	}
}
