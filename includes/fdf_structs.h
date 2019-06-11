/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf_structs.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmira <kmira@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 16:22:00 by kmira             #+#    #+#             */
/*   Updated: 2019/06/10 19:18:02 by kmira            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_STRUCTS_H
# define FDF_STRUCTS_H

# define PX pos[0]
# define PY pos[1]
# define PZ pos[2]

# define X 0
# define Y 1
# define Z 2


typedef struct		s_point
{
	char			exist;
	char			id[2];

	int				pos[3];
	char			*color;
}					t_point;

typedef struct		s_app
{
	void			*mlx_connection;
	void			*window;
}					t_app;

typedef struct		s_camera
{
	int				rotation_angle_x;
	int				rotation_angle_y;
	int				pos[3];
	int				target[3];
}					t_camera;

#endif