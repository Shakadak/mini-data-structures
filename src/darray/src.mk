DARRAY	:=	darray_basic.c

OBJ := $(OBJ) $(DARRAY:.c=.o)

$(DIROBJ)/%.o: $(DIRDARRAY)/%.c
	$(COMPIL)
