#   VARIABLES
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

SRCS_DIR = srcs
SRCS = $(wildcard ft_*.c)

OBJS = $(SRCS:.c=.o)

AR = ar rcs
RM = rm -f

#   RULES
#   "My goal is to construct the NAME variable"
all: $(NAME)

#   rule that effectively creates $(NAME)
#   To create $(NAME), i first need all the OBJS
#   (files with the .o extension) to exist
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

#   Pattern Rule
#   it tells the Makefile how to transform
#   any .c file into a .o file
#
#   -c  =  compile only until the object is generated
#   $<  =  first requirement  = .c
#   $@  =  target name  =  .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#   Delete all .o files
clean:
	$(RM) $(OBJS)

#   after deleting the .o files, it also deletes
#   the final file
fclean: clean
	$(RM) $(NAME)

#   rebuild everything from scratch
re: fclean all



#   it tells the Makefile that these words
#   (all, clean, etc.) are not filenames,
#   they are rule names
.PHONY: all clean fclean re
