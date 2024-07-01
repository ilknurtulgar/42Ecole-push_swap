NAME=push_swap
SRCS= main.c\
	  error_util.c\
	  arg_details.c\
	  swap.c\
	  push.c\
	  reverse_rotate.c\
	  rotate.c\
	  sorting_utils.c\
	  sorting_utils2.c\
	  flag_assign.c\
	  radix_sort.c\

OBJS=$(SRCS:.c=.o)
CC=gcc
CFLAGS= -Wall -Wextra -Werror -g
RM= rm -rf
PRINTF=./ft_printf/libftprintf.a
LIBFT=./libft/libft.a
PINK=\033[0;35m
NC=\033[0m

all: $(NAME)

$(NAME) : $(OBJS)
	make -C ./ft_printf -s
	make -C ./libft -s
	make bonus -C ./libft -s
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) $(LIBFT) -o $(NAME)
	@echo "$(PINK)<< everything is okey honey! <3 >>$(NC)"


clean:
	make clean -C ./ft_printf -s
	make clean -C ./libft -s
	make bonus clean -C ./libft -s
	$(RM) $(OBJS)
	@echo "$(PINK)<< objects file is removed honey! <3 >>$(NC)"

fclean: clean
	make fclean -C ./ft_printf -s
	make fclean -C ./libft -s
	make bonus clean -C ./libft -s
	rm -rf libft/libft.a
	$(RM) $(NAME)
	@echo "$(PINK)<< everything is removed honey! <3 >>$(NC)"

re: fclean all

.PHONY: all clean fclean re


