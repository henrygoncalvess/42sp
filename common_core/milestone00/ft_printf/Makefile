#   VARIABLES
NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

SRCS = $(wildcard ft_*.c)
#   ls | sed 's/\.c/\ \\/'

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
LIBFT_SRCS = ft_putchar_fd.c
LIBFT_OBJS = $(LIBFT_DIR)/$(LIBFT_SRCS:.c=.o)

AR = ar rcs
RM = rm -f

#   RULES
#   "My goal is to construct the NAME variable"
#   C looks in the folder: "does libftprintf.a exist and is it up-to-date?".
#   If it's not, it goes down to look for a rule that teaches how to create
#   libftprintf.a.
all: $(NAME)

#   rule that creates $(NAME)
#   "to create $(NAME), i first need all the OBJS
#   (files with the .o extension) to exist"
$(NAME): $(OBJS) $(LIBFT_OBJS)
	$(AR) $(NAME) $(OBJS) $(LIBFT_OBJS)

#   PATTERN RULE
#   it tells the Makefile how to transform
#   any .c file into a .o file
#
#   -c  =  compile only until the object is generated
#   $<  =  first requirement  =  .c
#   $@  =  target name  =  .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#   Delete all .o files
clean:
	$(RM) $(OBJS) $(LIBFT_OBJS)

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
