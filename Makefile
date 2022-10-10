# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: Maurice809 <maurice809@hotmail.com>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/09/22 16:49:57 by Maurice809        #+#    #+#              #
#    Updated: 2022/10/11 00:22:01 by tmoret           ###   ########.fr        #
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
		  ft_error.c \
		  ft_checarg.c \
		  ft_checinit.c \
		  ft_initmax.c \
		  ft_initmin.c \
		  ft_checdouble.c \
		  ft_initstate.c \
		  ft_printstack.c \
		  ft_rotate.c \
		  ft_rrotate.c \
		  ft_push.c \
		  ft_swap.c \
		  ft_fmin.c \
		  ft_fmin_b.c \
		  ft_fmax.c \
		  ft_fmax_b.c \
		  ft_sort.c \
		  ft_sort_03.c \
		  ft_sort_04.c \
		  ft_sort_05.c \
		  ft_sort_06.c \
		  ft_sort_07.c \
		  ft_sort_08.c \
		  ft_sort_09.c \
		  ft_sort_10.c \
		  ft_sort_00.c \
		  ft_checkps.c \
		  ft_checkpsif.c \
		  ft_checkpsif_03.c \
		  ft_checktri.c \
		  ft_str.c \
		  ft_sort_radix.c \
		  ft_simplify.c \

#		  $(addprefix so_long/,$(shell ls $(SRCDIR)/so_long | grep -E ".+\.c"))

OBJ		= $(addprefix $(OBJDIR)/,$(SRC:.c=.o))

# compiler
CC		= clang
CFLAGS	= -Wall -Werror -g -Wextra # -fsanitize=address

ifeq ($(DEBUG), debug)
	CFLAGS += -fsanitize=address -g3
endif

# ft library
FT		= ./src/libft/
FT_LIB	= $(addprefix $(FT),libft.a)
FT_INC	= -I ./src/libft
FT_LNK	= -L ./src/libft -l ft 

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
	$(CC) $(CFLAGS) $(OBJ)  $(FT_LNK) -lm -o $(NAME)

clean:
	rm -rf $(OBJDIR)
	make -C $(FT) clean

fclean: clean
	rm -rf $(NAME)
	make -C $(FT) fclean

bonus: obj $(FT_LIB) $(NAME)

re: fclean all
