# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maeferre <maeferre@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/28 23:48:47 by maeferre          #+#    #+#              #
#    Updated: 2023/12/01 16:04:34 by maeferre         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Werror -Wextra
SRC = ft_printf.c \
      ft_print_type.c \
      ft_putchar.c
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