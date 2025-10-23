# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: epandele <epandele@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/23 00:00:00 by user              #+#    #+#              #
#    Updated: 2025/10/23 10:59:36 by epandele         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nome della libreria
NAME		= libft.a

# Compilatore e flag
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
AR			= ar rcs
RM			= rm -f

# Directory
OBJ_DIR		= obj

# ============================================================================ #
# AGGIUNGI QUI LE TUE FUNZIONI                                                #
# ============================================================================ #

SRCS		= 

# Esempio di come aggiungere funzioni:
# SRCS		= ft_atoi.c \
#			  ft_strlen.c \
#			  ft_strdup.c \
#			  ft_split.c \
#			  ft_isdigit.c

# ============================================================================ #

# File oggetto
OBJS		= $(SRCS:%.c=$(OBJ_DIR)/%.o)

# Colori
GREEN		= \033[0;32m
RED			= \033[0;31m
RESET		= \033[0m

# Regola principale
all: $(NAME)

# Creazione della libreria
$(NAME): $(OBJS)
	@$(AR) $(NAME) $(OBJS)
	@echo "$(GREEN)✓ $(NAME) creata con successo!$(RESET)"

# Compilazione file oggetto
$(OBJ_DIR)/%.o: %.c
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c $< -o $@
	@echo "$(GREEN)✓$(RESET) Compilato: $<"

# Pulizia file oggetto
clean:
	@$(RM) -r $(OBJ_DIR)
	@echo "$(RED)✗ File oggetto rimossi$(RESET)"

# Pulizia completa
fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)✗ $(NAME) rimossa$(RESET)"

# Ricompilazione completa
re: fclean all

# Regole phony
.PHONY: all clean fclean re