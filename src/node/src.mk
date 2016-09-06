NODE	:=	node.c

OBJ := $(OBJ) $(NODE:.c=.o)

$(DIROBJ)/%.o: $(DIRNODE)/%.c
	$(COMPIL)
