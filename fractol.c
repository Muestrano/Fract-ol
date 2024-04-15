/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fractol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: picarlie <picarlie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 17:07:58 by picarlie          #+#    #+#             */
/*   Updated: 2024/04/15 19:45:04 by picarlie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	main(int argc, char **argv)
{
	t_fractal	fractal;
	
	if ((argc == 2 && !ft_strncmp(argv[1], "mandelbrot", 10)) || (argc == 4 && !ft_strncmp(argv[1], "julia", 5)))
	{
		fractal.name = argv[1];
		
	}
	printf("Hello\n");
	return(0);
}
