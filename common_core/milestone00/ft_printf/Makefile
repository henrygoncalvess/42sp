#   VARIABLES
NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

SRCS = $(wildcard src/ft_*.c)
#   ls | sed 's/\.c/\ \\/'

OBJS = $(SRCS:.c=.o)

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

AR = ar rcs
RM = rm -f

#   RULES
#   "My goal is to construct the NAME variable"
#   C looks in the folder: "does $(NAME) exist and is it up-to-date?". If it's
#   not, it goes down to look for a rule that teaches how to create $(NAME)
all: $(NAME)

#   rule that creates $(NAME)
#   "to create $(NAME), i first need all the OBJS
#   (files with the .o extension) to exist"

# 	1. Copies $(LIBFT) and renames it to $(NAME)
# 	2. Injects $(OBJS)'s .o files into the copied library
$(NAME): $(OBJS) $(LIBFT)
	cp $(LIBFT) $(NAME)
	$(AR) $(NAME) $(OBJS) $(LIBFT)

#   Enters the $(LIBFT_DIR) folder and runs its Makefile
$(LIBFT):
	$(MAKE) -C $(LIBFT_DIR)

#   PATTERN RULE
#   it tells the Makefile how to transform
#   any .c file into a .o file
#
#   -c  =  compile only until the object is generated
#   $<  =  first requirement  =  .c
#   $@  =  target name  =  .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

#   1. Delete all .o files
#   2. make enters $(LIBFT_DIR) folder and executes the "clean" rule of the
#   Makefile for that folder
clean:
	$(RM) $(OBJS) $(LIBFT)
	$(MAKE) -C $(LIBFT_DIR) clean

#   after deleting the .o files, it also deletes
#   the final file
fclean: clean
	$(RM) $(NAME)
	$(MAKE) -C $(LIBFT_DIR) fclean

#   rebuild everything from scratch
re: fclean all



#   it tells the Makefile that these words
#   (all, clean, etc.) are not filenames,
#   they are rule names
.PHONY: all clean fclean re
