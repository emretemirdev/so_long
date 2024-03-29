/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emtemir <emtemir@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 15:01:44 by emtemir           #+#    #+#             */
/*   Updated: 2024/01/12 15:01:44 by emtemir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	ft_error(char *msg, t_data *data)
{
	ft_printf(msg);
	if (data->window && data->mlx)
		mlx_destroy_window(data->mlx, data->window);
	free(data->mlx);
	free_map(data);
	exit(EXIT_FAILURE);
}

int	close_window(t_data *data)
{
	if (data->window && data->mlx)
		mlx_destroy_window(data->mlx, data->window);
	free(data->mlx);
	free_map(data);
	exit(EXIT_SUCCESS);
	return (0);
}

void	free_map(t_data *data)
{
	int	i;

	i = 0;
	if (data->map1)
		free(data->map1);
	if (data->map2)
	{
		while (data->map2[i])
		{
			free(data->map2[i]);
			i++;
		}
		free(data->map2);
	}
}

int	main(int ac, char **av)
{
	t_data	*data;

	if (ac == 2)
	{
		data = ft_calloc(sizeof(t_data), 1);
		bercheck(av[1], data);
		make_map(data, av[1]);
		map_check(data);
		rectangular_check(data);
		wall_check(data);
		validmap_check(data, data->ply_x, data->ply_y);
		path_check(data);
		data->mlx = mlx_init();
		init_image(data);
		mlx_hook(data->window, 2, 0, key_event, data);
		mlx_hook(data->window, 17, 0, close_window, data);
		mlx_loop(data->mlx);
	}
	else
	{
		ft_printf("wrong arguments\n");
		exit(1);
	}
}
