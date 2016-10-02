/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   darray_mem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 12:35:21 by npineau           #+#    #+#             */
/*   Updated: 2016/10/02 12:35:23 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "inc/darray.h"
#include "inc/mem.h"

t_darray	*darray_expand(t_darray *a)
{
	void	*new;

	new = malloc(a->x_size * (a->capacity * a->gf + 1));
	ft_memcpy(new, a->xs, a->used * a->x_size);
	free(a->xs);
	a->xs = new;
	return (a);
}
