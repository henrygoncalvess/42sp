NAME = rush-02
SRC = main.c helper.c
RM = rm -f

# take everything in the variable SRC, look for the ending .c
# and replace it with .o, storing the result in the variable OBJ
OBJ = $(SRC:%.c=%.o)

# to create rush-02, i need the objects. once I have
# the objects, use this command to create rush-02
$(NAME): $(OBJ)
	cc -Wall -Wextra -Werror $(OBJ) -o $(NAME)

# to create a .o file, search for the corresponding .c file
# and create it using the actions below
%.o: %.c
	cc -Wall -Wextra -Werror -c $< -o $@

# exec the $(NAME) rule
all: $(NAME)

# delete only the .o files
clean:
	$(RM) $(OBJ)

# delete the .o files and the final executable
fclean: clean
	$(RM) $(NAME)

# delete everything and compile from scratch
re: fclean all

# this rule tells make: "all, clean, fclean, and re are not files,
# they are just command names."
.PHONY: all clean fclean re
