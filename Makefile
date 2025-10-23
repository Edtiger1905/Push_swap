# ================================ COLORS ==================================== #
GREEN		= \033[0;32m
YELLOW		= \033[0;33m
BLUE		= \033[0;34m
RED			= \033[0;31m
RESET		= \033[0m
BOLD		= \033[1m

# ============================== CONFIGURATION =============================== #
NAME		= push_swap
CC			= cc
CFLAGS		= -Wall -Wextra -Werror -g
INCLUDES	= -I./includes -I./$(LIBFT_DIR)
RM			= rm -f

# ================================ PATHS ===================================== #
SRC_DIR		= src
OBJ_DIR		= obj
LIBFT_DIR	= libft
LIBFT		= $(LIBFT_DIR)/libft.a
LIBFT_INC	= $(LIBFT_DIR)

# =============================== SOURCES ==================================== #
SRCS		= $(SRC_DIR)/main.c \
			  $(SRC_DIR)/parser.c \
			  $(SRC_DIR)/error_handling.c \
			  $(SRC_DIR)/stack_operations.c \
			  $(SRC_DIR)/push_operations.c \
			  $(SRC_DIR)/swap_operations.c \
			  $(SRC_DIR)/rotate_operations.c \
			  $(SRC_DIR)/reverse_rotate_operations.c \
			  $(SRC_DIR)/algorithm_small.c \
			  $(SRC_DIR)/algorithm_large.c \
			  $(SRC_DIR)/utils.c \
			  $(SRC_DIR)/free_memory.c

# =============================== OBJECTS ==================================== #
OBJS		= $(SRCS:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

# =============================== RULES ====================================== #

all: $(NAME)

$(NAME): $(OBJ_DIR) $(LIBFT) $(OBJS)
	@echo "$(BLUE)$(BOLD)Linking $(NAME)...$(RESET)"
	@$(CC) $(CFLAGS) $(OBJS) $(LIBFT) -o $(NAME)
	@echo "$(GREEN)✓ $(NAME) compiled successfully!$(RESET)"
	@echo ""

$(OBJ_DIR):
	@mkdir -p $(OBJ_DIR)
	@echo "$(YELLOW)📁 Created $(OBJ_DIR) directory$(RESET)"

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@echo "$(BLUE)Compiling $<...$(RESET)"
	@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(LIBFT):
	@echo "$(YELLOW)Building libft (ft_atoi, ft_split, etc.)...$(RESET)"
	@make -C $(LIBFT_DIR) --no-print-directory
	@echo "$(GREEN)✓ libft ready (with ft_atoi.c, ft_split.c and more)$(RESET)"

clean:
	@echo "$(RED)Cleaning object files...$(RESET)"
	@$(RM) -r $(OBJ_DIR)
	@make -C $(LIBFT_DIR) clean --no-print-directory
	@echo "$(GREEN)✓ Clean complete$(RESET)"

fclean: clean
	@echo "$(RED)Removing executables...$(RESET)"
	@$(RM) $(NAME)
	@make -C $(LIBFT_DIR) fclean --no-print-directory
	@echo "$(GREEN)✓ Full clean complete$(RESET)"

re: fclean all

bonus: all

.PHONY: all clean fclean re bonus