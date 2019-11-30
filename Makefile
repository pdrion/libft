NAME		=	libft.a

SRCS_NAME	=	ft_bzero.c\
				ft_isalnum.c\
				ft_isalpha.c\
				ft_isascii.c\
				ft_isdigit.c\
				ft_isprint.c\
				ft_memccpy.c\
				ft_memchr.c\
				ft_memcmp.c\
				ft_memcpy.c\
				ft_memmove.c\
				ft_memset.c\
				ft_strchr.c\
				ft_strlen.c\
				ft_strncmp.c\
				ft_strrchr.c\
				ft_tolower.c\
				ft_toupper.c\
				ft_strlcpy.c\
				ft_strlcat.c\
				ft_strnstr.c\
				ft_atoi.c\
				ft_calloc.c\
				ft_strdup.c\
				ft_substr.c\
				ft_strjoin.c\
				ft_strtrim.c\
				ft_split.c\
				ft_itoa.c\
				ft_strmapi.c\
				ft_putchar_fd.c\
				ft_putendl_fd.c\
				ft_putnbr_fd.c\
				ft_lstnew.c\
				ft_lstadd_front.c\
				ft_lstsize.c\
				ft_lstlast.c\
				ft_lstadd_back.c\
				ft_lstdelone.c\
				ft_lstclear.c\
				ft_lstiter.c\
				ft_lstmap.c\

OBJS_NAME	= $(SRCS_NAME:.c=.o)
SRCS_PATH	= ./srcs
OBJS_PATH	= ./srcs
SRCS		= $(addprefix $(SRCS_PATH)/,$(SRCS_NAME))
OBJS		= $(addprefix $(OBJS_PATH)/,$(OBJS_NAME))

CC			= gcc
RM			= rm -rf
CFLAGS		= -Wall -Werror -Wextra -I./includes

all		:	$(NAME)

$(NAME)	:	$(OBJS)
			ar rc $(NAME) $(OBJS)

$(OBJS_PATH)/%.o: $(SRCS_PATH)/%.c
			$(CC) $(CFLAGS) -o $@ -c $<

clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)
re		:	fclean all
