/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   node.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: npineau <npineau@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/02 12:35:47 by npineau           #+#    #+#             */
/*   Updated: 2016/10/02 12:35:49 by npineau          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/node.h"

t_node	make_node(void *v, t_node *next)
{
	return (t_node){v, next};
}

void	*get_value(t_node n)
{
	return (n.value);
}

t_node	*get_next(t_node n)
{
	return (n.next);
}

void	set_value(t_node *n, void *v)
{
	n->value = v;
}

t_node	*set_next(t_node *n, t_node *next)
{
	n->next = next;
	return (next);
}
