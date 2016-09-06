#include "inc/node.h"

t_node	make_node(void *element, t_node *next)
{
	return (t_node){element, next};
}
