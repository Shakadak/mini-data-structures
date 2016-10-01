#include <stdlib.h>
#include "inc/darray.h"
#include "inc/mem.h"

t_darray	darray_expand(t_darray *a)
{
	void	*new;

	new = malloc(a->x_size * (a->capacity * a->gf + 1));
	ft_memcpy(new, a->xs, a->used * a->x_size);
	free(a->xs);
	a->xs = new;
	return (*a);
}
