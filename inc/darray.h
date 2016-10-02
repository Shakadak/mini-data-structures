/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 12:35:01 by npineau           #+#    #+#             */
/*   Updated: 2016/10/02 12:35:04 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DARRAY_H
# define DARRAY_H

# include <stddef.h>

typedef struct		s_darray
{
	void			*xs;
	size_t			capacity;
	size_t			used;
	size_t			x_size;
	double			gf;
}					t_darray;

t_darray			darray_make(size_t x_size,
		size_t capacity,
		double growth_factor);
t_darray			*darray_set_at(size_t i, void *val, t_darray *a);
void				*darray_get_at(size_t i, t_darray *a);
size_t				darray_size(t_darray a);
t_darray			*darray_expand(t_darray *a);
t_darray			*darray_push(void *v, t_darray *a);
void				*darray_pop(t_darray *a);
#endif
