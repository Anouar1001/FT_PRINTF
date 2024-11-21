SRCS = 	ft_putchar.c ft_putnbr.c ft_putstr.c ft_helper.c \
		ft_puthex.c  ft_putpp.c   ft_putu.c ft_printf.c


OBJS = $(SRCS:.c=.o)

NAME = libftprintf.a

CFLAGS = -Wall -Wextra -Werror

AR = ar rc
RM = rm -f


all : $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c ft_printf.h
	cc $(CFLAGS) -c $<  -o $@

clean : 
	$(RM) $(OBJS)
fclean :
	$(RM) $(OBJS) $(NAME)
re : fclean all