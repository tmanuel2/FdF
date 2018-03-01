/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_key_hook4.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmanuel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/05 08:51:04 by tmanuel           #+#    #+#             */
/*   Updated: 2018/02/08 23:22:38 by tmanuel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void			ft_key_hook4(int key, t_libx *p)
{
	if (key == 115)
		p->height += 1.5;
	if (key == 119)
		p->height -= 1.5;
	mlx_destroy_image(p->mlx_ptr, p->image);
	ft_init(p, 0);
}