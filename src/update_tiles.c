/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   update_tiles.c                                      :+:    :+:           */
/*                                                      +:+                   */
/*   By: cyglardo <marvin@42.fr>                       +#+                    */
/*                                                    +#+                     */
/*   Created: 2025/03/17 11:45:51 by cyglardo       #+#    #+#                */
/*   Updated: 2025/03/17 11:45:52 by cyglardo       ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"
#include "libft.h"

void	update_last_tile(t_data *data, t_point pos)
{
	mlx_put_image_to_window_with_transparency(data, &data->tiles.ground, pos.y * 64, pos.x * 64);
	if (data->was_carot == 1 || data->map[pos.x][pos.y] == 'c')
	{
		data->was_carot = 0;
		data->map[pos.x][pos.y] = 'c';
		mlx_put_image_to_window_with_transparency(data, &data->tiles.collected, pos.y * 64, pos.x * 64);
	}
	else if (data->was_exit == 1 || data->map[pos.x][pos.y] == 'E')
	{
		data->was_exit = 0;
		data->map[pos.x][pos.y] = 'E';
		mlx_put_image_to_window_with_transparency(data, &data->tiles.exit, pos.y * 64, pos.x * 64);
	}
	else
	{
		data->map[pos.x][pos.y] = '0';
		mlx_put_image_to_window_with_transparency(data, &data->tiles.ground, pos.y * 64, pos.x * 64);
	}
}

void	update_new_tile(t_data *data, t_point pos)
{
	if (data->map[pos.x][pos.y] == 'C')
	{
		data->was_carot = 1;
		data->map[pos.x][pos.y] = 'c';
		data->c_remaining --;
	}
	if (data->was_carot == 1 || data->map[pos.x][pos.y] == 'c')
	{
		data->was_carot = 1;
		mlx_put_image_to_window_with_transparency(data, &data->tiles.collected, pos.y * 64, pos.x * 64);
	}
	else if (data->map[pos.x][pos.y] == 'E')
	{
		if (data->c_remaining == 0)
			on_destroy(data);
		else
		{
			data->was_exit = 1;
			mlx_put_image_to_window_with_transparency(data, &data->tiles.exit, pos.y * 64, pos.x * 64);
		}
	}
}
