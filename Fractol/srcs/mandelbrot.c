/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mandelbrot.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/01 12:21:20 by jabilbo           #+#    #+#             */
/*   Updated: 2020/07/27 18:18:21 by jabilbo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void				mandelbrot(t_fractol *fractol)
{
	t_complex		z;
	
			z = init_complex(fractol->c.re, fractol->c.im);
			fractol->iteration = 0;

			while(fractol->iteration < fractol->max_iteration
				&& pow(z.re, 2.0) + pow(z.im, 2.0) <= 4)
			{
				z = init_complex(
				pow(z.re, 2.0) - pow(z.im, 2.0) + fractol->c.re,
					2.0 * z.re * z.im + fractol->c.im);
				fractol->zn = sqrt(z.re * z.re + z.im * z.im);
				fractol->iteration++;
			}
}
