NAME_C= client
NAME_S= server
CLIENT= ./src/client.c
SERVER= ./src/server.c
INCLUDE= ./src/minitalk.h
OBJS_CLIENT= $(CLIENT:.c=.o)
OBJS_SERVER= $(SERVER:.c=.o)

CC= cc
FLAGS= -Wall -Wextra -Werror

LIBFT = ./libft/libft.a

all: $(NAME_C) $(NAME_S)

$(NAME_C): $(LIBFT) $(OBJS_CLIENT) $(INCLUDE)
	$(CC) $(FLAGS) -o $(NAME_C) $(OBJS_CLIENT) $(LIBFT)

$(NAME_S): $(LIBFT) $(OBJS_SERVER) $(INCLUDE)
	$(CC) $(FLAGS) -o $(NAME_S) $(OBJS_SERVER) $(LIBFT)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

$(LIBFT):
	make -C libft

clean:
	rm -f $(OBJS_CLIENT) $(OBJS_SERVER)
	make -C libft clean

fclean: clean
	rm -f $(NAME_C) $(NAME_S)
	make -C libft fclean

re: fclean all

.PHONY : all clean fclean re 
