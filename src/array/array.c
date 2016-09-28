#include <stdlib.h>
#include "inc/array.h"

t_array	make_array(size_t x_size, size_t capacity)
{
	t_array	ret;

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
	return ret;
}

void	*get_value_at(t_array* xs, size_t i);
