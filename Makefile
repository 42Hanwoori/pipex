# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: whan <whan@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/01 12:10:53 by whan              #+#    #+#              #
#    Updated: 2021/11/18 16:12:40 by whan             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= pipex

CC				= gcc
CFLAGS			= -Wall -Wextra -Werror

INCS			= -Ilibft -I.

SRCS_DIR		= srcs
SRCS_NAME		= pipex.c \
					utils.c

SRCS			= $(addprefix $(SRCS_DIR)/, $(SRCS_NAME))

OBJS_DIR		= objs
OBJS			= $(addprefix $(OBJS_DIR)/, $(SRCS_NAME:.c=.o))

LIB_DIR			= libft
LIB_NAME		= ft
LIB				= $(addprefix $(LIB_DIR)/, libft.a)

$(NAME)			: $(LIB) $(OBJS)
					$(CC) $(CFLAGS) $(INCS) -L$(LIB_DIR) -l$(LIB_NAME) $(OBJS) -o $@

$(LIB)			:
					$(MAKE) -C $(LIB_DIR) all

$(OBJS_DIR)/%.o : $(SRCS_DIR)/%.c
					mkdir -p $(OBJS_DIR)
					$(CC) $(CFLAGS) $(INCS) -c $< -o $@

all 			: $(NAME)

clean			:
					$(MAKE) -C $(LIB_DIR) clean
					rm -rf $(OBJS_DIR)

fclean			:
					$(MAKE) -C $(LIB_DIR) fclean
					rm -rf $(NAME) $(OBJS_DIR) 

re				: fclean all

.PHONY			: all clean fclean re