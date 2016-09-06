#include "inc/node.h"

t_node	make_node(void *v, t_node *next)
{
	return (t_node){v, next};
}

void	*get_value(t_node n)
{
	return (n.value);
}
