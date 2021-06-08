NAME        =    libft.a

CFLAGS         =    -Wall -Wextra -Werror -c

CC            =    gcc

SRCS        =    ft_atoi.c ft_tolower.c \
				 ft_bzero.c ft_memccpy.c ft_strlen.c ft_toupper.c \
				 ft_isalnum.c ft_strlcat.c ft_strlcpy.c \
				 ft_memchr.c ft_memcmp.c ft_itoa.c ft_strtrim.c \
				 ft_split.c ft_strncmp.c ft_isalpha.c ft_memcpy.c \
				 ft_strchr.c ft_strnstr.c ft_isascii.c ft_memmove.c ft_strdup.c \
				 ft_calloc.c ft_strrchr.c ft_isdigit.c ft_memset.c ft_putchar_fd.c \
				 ft_putendl_fd.c ft_putstr_fd.c ft_substr.c ft_strmapi.c ft_strjoin.c ft_putnbr_fd.c \
				 ft_isprint.c \

BONUS	=		ft_lstnew.c \ ft_lstsize.c \ ft_lstlast.c \ ft_lstadd_front.c \ ft_lstadd_back.c \ ft_lstdelone.c \

OBJS        =    $(SRCS:.c=.o)

OBJS_BONUS	= $(BONUS:.c=.o)


all        :    $(NAME)

$(NAME)    : $(OBJS)
	@ar crs $@ $(OBJS)

bonus : $(OBJS) $(OBJS_BONUS)
	@ar crs $(NAME) $^
	@ranlib $(NAME)

%.o : %.c
	@$(CC) $(CFLAGS) $< -o $@

clean:
	@rm -rf $(OBJS)

fclean: clean
	@rm -f $(NAME)

re:        fclean all
