#include <stdlib.h>
#include "inc/darray.h"
#include "inc/mem.h"

t_darray	make_array(size_t x_size, size_t capacity, double growth_factor)
{
	t_darray	ret;

	ret.xs = malloc(x_size * capacity);
	if (ret.xs == NULL)
	{
		ret.capacity = 0;
	}
	else
	{
		ret.capacity = capacity;
	}
	ret.x_size = x_size;
	ret.used = 0;
	ret.gf = growth_factor <= 1.0 ? 2 : growth_factor;
	return (ret);
}

void		*darray_get_at(t_darray a, size_t i)
{
	return (a.xs + i * a.x_size);
}

t_darray	darray_set_at(t_darray *a, size_t i, void *val)
{
	ft_memcpy(a->xs + i * a->x_size, val, a->x_size);
	return (*a);
}
