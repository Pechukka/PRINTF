NAME= libftprintf.a

CC= gcc
CFLAGS= -Wall -Wextra -Werror
RM= rm -f

SRCS =		ft_putchar.c \
			ft_printf.c \
			ft_putstr.c \
			ft_strlen.c \
			ft_putchar_fd.c \
			ft_putptr.c \
			ft_putnbr.c \
			ft_putunsigned.c \
			ft_puthex.c

OBJS = $(SRCS:.c=.o)

$(NAME) : $(OBJS)
	@ar crs $(NAME) $(OBJS)

all: $(NAME)

clean:
	@$(RM) $(OBJS)
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all re clean fclean
