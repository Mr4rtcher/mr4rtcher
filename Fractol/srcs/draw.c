/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 11:37:44 by jabilbo           #+#    #+#             */
/*   Updated: 2020/07/20 13:16:24 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void			draw(t_fractol *fractol, int iteration)
{
	mlx_pixel_put(fractol->mlx_ptr, fractol->win_ptr, fractol->x, fractol->y, get_color(iteration, fractol));
}

int				get_color(int iteration, t_fractol *fractol)
{
	double			color;
	double			t;
	t = (double)iteration / (double)fractol->max_iteration;
	if (t == 1){
		color = 0x000000;}
	else
	{
		color = RGB(256 * t, 0, 0);
	}
	
	return (color);
}