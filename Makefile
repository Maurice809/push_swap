# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 16:49:57 by Maurice809        #+#    #+#              #
#    Updated: 2022/09/22 16:50:12 by Maurice809       ###   Lausanne.ch        #
#                                                                              #
# **************************************************************************** #

NAME	= push_swap
OS		= $(shell uname)

# directories
SRCDIR	= ./src/projet
INCDIR	= ./src/includes
OBJDIR	= ./src/obj

# src / obj files
SRC		= main.c \

#		  $(addprefix so_long/,$(shell ls $(SRCDIR)/so_long | grep -E ".+\.c"))

OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

# compiler
CC		= cc
CFLAGS	= -Wall -Werror -g -Wextra

ifeq ($(DEBUG), debug)
	CFLAGS += -fsanitize=address -g3
endif

# ft library
FT		= ./src/libft/
FT_LIB	= $(addprefix $(FT),libft.a)
FT_INC	= -I ./src/libft
FT_LNK	= -L ./src/libft -l ft -l pthread

all: obj $(FT_LIB) $(NAME) 

obj:
	mkdir -p $(OBJDIR)
	mkdir -p $(OBJDIR)/main
	mkdir -p $(OBJDIR)/push_swap

$(OBJDIR)/%.o:$(SRCDIR)/%.c
	$(CC) $(CFLAGS) $(FT_INC) -I $(INCDIR) -o $@ -c $<

$(FT_LIB):
	@make -C $(FT)

$(NAME): $(OBJ)
	$(CC) $(OBJ)  $(FT_LNK) -lm -o $(NAME)	
#	-fsanitize=address

clean:
	rm -rf $(OBJDIR)
	make -C $(FT) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(FT) fclean

bonus: obj $(FT_LIB) $(NAME)

re: fclean all
