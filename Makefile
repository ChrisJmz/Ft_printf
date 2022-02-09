# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjimenez <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/30 15:55:25 by cjimenez          #+#    #+#              #
#    Updated: 2021/12/15 12:44:51 by cjimenez         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME = libftprintf.a

SRCS =	sources/ft_putchar.c		\
		sources/ft_putstr.c			\
		sources/ft_strlen.c			\
		sources/ft_nbrlen.c			\
		sources/ft_unsnbrlen.c		\
		sources/ft_putnbr_hexa.c	\
		sources/ft_params.c			\
		sources/ft_printf.c			\
		sources/ft_printf_c.c		\
		sources/ft_printf_s.c		\
		sources/ft_printf_p.c		\
		sources/ft_printf_d.c		\
		sources/ft_printf_u.c		\
		sources/ft_printf_x.c		\
		sources/ft_printf_x_upper.c	\
		sources/ft_printf_percent.c	\

OBJS = $(SRCS:.c=.o)
	
CC = gcc

INC_DIR = header

CFLAG = -Wall -Wextra -Werror

AR = ar rcs

RM = rm -f

.c.o:
	@$(CC) $(CFLAGS) -c -I $(INC_DIR) $< -o $(<:.c=.o)

all: $(NAME)

$(NAME) : $(OBJS)
	$(AR) $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS) 

fclean: clean
	$(RM) $(NAME)

re: fclean all
	
.PHONY: all clean fclean re
