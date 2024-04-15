/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   render.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picarlie <picarlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 18:51:22 by picarlie          #+#    #+#             */
/*   Updated: 2024/04/15 19:34:46 by picarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	handle_pixel(int x, int y, t_fractal *fractal)
{
	t_complex	z;
	t_complex	c;

	z.x = 0.0;
	z.y = 0.0;

	c.x = map(x, -2, +2, 0, WIDTH);
	c.y = map(y, +2, -2, 0, HEIGHT);

	/*how many times you want to iterate z^2+c to check if the point escapes*/
	while ()
	{
		z = sum_complex(square_complex(z), c); //todo

		//if value escaped
		if ()
		{
			my_pixel_put(); // todo
			return;
		}
	}
	}

void	fractal_render(t_fractal *fractal)
{
	int	x;
	int	y;
	
	y = -1;
	while (++y < HEIGHT)
	{
		x = -1;
		while (++x < WIDTH)
		{
			handle_pixel(x, y, fractal);
		}
	}
}