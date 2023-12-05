# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 23:48:47 by maeferre          #+#    #+#              #
#    Updated: 2023/12/04 18:28:43 by maeferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c \
      ft_print_type.c \
      ft_putchar.c \
	  ft_strlen.c \
	  ft_print_c.c \
	  ft_print_d.c \
	  ft_print_p.c \
	  ft_print_s.c \
	  ft_print_u.c \
	  ft_print_x.c \
	  ft_print_x2.c \
	  ft_putnbr.c \
	  ft_putnbr_unsigned.c \
	  ft_putstr.c \
	  ft_puthexa_upper.c \
	  ft_puthexa_lower.c
OBJ_DIR = objects
OBJ = $(addprefix $(OBJ_DIR)/, $(SRC:.c=.o))
DEP = $(OBJ:.o=.d)
NAME = libftprintf.a

.PHONY : all clean fclean re

all : $(NAME)

$(OBJ_DIR)/%.o : %.c
	@mkdir -p $(@D)
	$(CC) $(CFLAGS) -MMD -c $< -o $@

-include $(DEP)

$(NAME) : $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean :
	rm -rf $(OBJ) $(DEP) $(OBJ_DIR)

fclean : clean
	rm -f $(NAME)

re : fclean all