#   VARIABLES
NAME = libft.a

CC = cc
CFLAGS = -Wall -Wextra -Werror -I .

SRCS = ft_atoi.c \
ft_bzero.c \
ft_calloc.c \
ft_isalnum.c \
ft_isalpha.c \
ft_isascii.c \
ft_isdigit.c \
ft_isprint.c \
ft_itoa.c \
ft_lstadd_back.c \
ft_lstadd_front.c \
ft_lstclear.c \
ft_lstdelone.c \
ft_lstiter.c \
ft_lstlast.c \
ft_lstmap.c \
ft_lstnew.c \
ft_lstsize.c \
ft_memchr.c \
ft_memcmp.c \
ft_memcpy.c \
ft_memmove.c \
ft_memset.c \
ft_putchar_fd.c \
ft_putendl_fd.c \
ft_putnbr_fd.c \
ft_putstr_fd.c \
ft_split.c \
ft_strchr.c \
ft_strdup.c \
ft_striteri.c \
ft_strjoin.c \
ft_strlcat.c \
ft_strlcpy.c \
ft_strlen.c \
ft_strmapi.c \
ft_strncmp.c \
ft_strnstr.c \
ft_strrchr.c \
ft_strtrim.c \
ft_substr.c \
ft_tolower.c \
ft_toupper.c

OBJS = $(SRCS:.c=.o)

AR = ar rcs
RM = rm -f

#   RULES
#   "My goal is to construct the NAME variable"
#   C looks in the folder: "does libft.a exist and is it up-to-date?".
#   If it's not, it goes down to look for a rule that teaches how to create libft.a.
all: $(NAME)

#   rule that creates $(NAME)
#   "to create $(NAME), i first need all the OBJS
#   (files with the .o extension) to exist"
$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

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
