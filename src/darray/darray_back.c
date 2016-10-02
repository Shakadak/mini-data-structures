/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_back.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 12:35:12 by npineau           #+#    #+#             */
/*   Updated: 2016/10/02 12:35:14 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/darray.h"
#include "inc/mem.h"

t_darray	*darray_push(void *v, t_darray *a)
{
	return (darray_set_at(a->used++, v
				, a->used == a->capacity ? darray_expand(a) : a));
}

void		*darray_pop(t_darray *a)
{
	return (darray_get_at(--a->used, a));
}
