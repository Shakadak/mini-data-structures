#ifndef NODE_H
# define NODE_H

typedef struct		s_node
{
	void			*value;
	struct s_node	*next;
}					t_node;

t_node				make_node(void *v, t_node *next);
void				*get_value(t_node n);
t_node				*get_next(t_node n);
void				set_value(t_node *n, void *v);
t_node				*set_next(t_node *n, t_node *next);

#endif
