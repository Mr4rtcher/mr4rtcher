# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jabilbo <jabilbo@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/01 04:59:36 by jabilbo           #+#    #+#              #
#    Updated: 2020/08/06 17:23:52 by jabilbo          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = fractol

DEPS = *.h
DEPSDIR = includes
SRC = main.c\
	mandelbrot.c\
	julia.c\
	burning_ship.c\
	mandelbar.c\
	buffalo.c\
	draw.c\
	init.c\
	keyboard.c\
	mouse.c
SRCDIR = srcs
OBJ = $(SRC:.c=.o)
CC = /usr/bin/gcc
CCFLAGS = -Wall -Wextra -Werror -O3
RM = /bin/rm
RMFLAGS = -f
LIB = ft
LIBDIR = $(SRCDIR)/libft

all: $(NAME)
$(NAME): $(OBJ)
	make -C $(LIBDIR)
	$(CC) $(CCFLAGS)  $(DEBUG) srcs/libft/libft.a minilibx_macos/libmlx.a  -o $(NAME) $^ -framework OpenGL -framework AppKit

$(OBJ): %.o : $(SRCDIR)/%.c $(DEPSDIR)/$(DEPS)
	$(CC) $(CCFLAGS) -I $(DEPSDIR) -I $(LIBDIR) $(DEBUG) -c -o $@ $<

$(SRCDIR)/$(SRC):

$(DEPSDIR)/$(DEPS):

clean:
	make -C $(LIBDIR) clean
	$(RM) $(RMFLAGS) $(OBJ)

fclean: clean
	make -C $(LIBDIR) fclean
	$(RM) $(RMFLAGS) $(NAME)

re: fclean all

.PHONY: all clean fclean re