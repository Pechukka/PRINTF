# Nombre del archivo de la biblioteca
NAME = libftprintf.a

# Compilador y banderas de compilación
CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f

# Archivos fuente
SRCS =		ft_putchar.c \
            ft_printf.c \
            ft_putstr.c \
            ft_strlen.c \
            ft_putptr.c \
            ft_putnbr.c \
            ft_putunsigned.c \
            ft_puthex.c

# Archivos objeto generados a partir de los archivos fuente
OBJS = $(SRCS:.c=.o)

# Regla para crear la biblioteca
$(NAME) : $(OBJS)
    @ar crs $(NAME) $(OBJS) # Crea la biblioteca estática a partir de los archivos objeto

# Regla para compilar todo
all: $(NAME)

# Regla para limpiar los archivos objeto
clean:
    @$(RM) $(OBJS)

# Regla para limpiar los archivos objeto y la biblioteca
fclean: clean
    @rm -f $(NAME)

# Regla para recompilar todo
re: fclean all

# Declaración de las reglas como phony (no generan archivos)
.PHONY: all re clean fclean
