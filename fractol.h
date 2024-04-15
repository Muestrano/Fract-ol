/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picarlie <picarlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:06:23 by picarlie          #+#    #+#             */
/*   Updated: 2024/04/15 19:37:48 by picarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRACTOL_H
# define FRACTOL_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <math.h>
# include "./minilibx-linux/mlx.h"
# include "./Libft/libft.h"

#define ERROR_MESSAGE "Please enter \n\t\"./fractol mandelbrot\" or \n\t\"./fractol julia <value_1> <value_2>\"\n"

#define WIDTH 800
#define HEIGHT 800

/*Complex struct*/
typedef struct	s_complex
{
	double	x;
	double	y;
} t_complex;

/*Define image structure*/
typedef struct	s_img
{
	void	*img_ptr; //pointer to img struct
	char	*pixels_ptr; //points to the actual pixel
	int		bpp; //bits per pixel
	int		endian;
	int		line_len;
}	t_img;

/*Fractal ID
MLX stuff
Image
Hooks values*/
typedef struct	s_fractal
{
	char	*name;
	void	*mlx_connection; //from mlx_init()
	void	*mlx_window; //from mlx_new_window()

	t_img	img;;
	
}	t_fractal;

/*Init functions*/

void	fractal_init(t_fractal *fractal);

/*Maths*/
double	map(double unscaled_num, double new_min, double new_max, double old_min, double old_max);
t_complex	sum_complex(t_complex z1, t_complex z2);
t_complex	sum_complex(t_complex z1, t_complex z2);
#endif



/*
free les ptrs quand mlx_destroy_window?
mlx_pixel_put a recoder*/