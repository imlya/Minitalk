# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: imatek <imatek@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/05/24 09:41:30 by imatek            #+#    #+#              #
#    Updated: 2024/07/26 17:54:36 by imatek           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME= libft.a
FILES= ft_atoi.c ft_atol.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c \
		ft_memcmp.c ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c \
		ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_strchr.c \
		ft_strdup.c ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c \
		ft_strlen.c ft_strmapi.c ft_strcmp.c ft_strncmp.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c ft_split.c \
		get_next_line.c get_next_line_utils.c functions.c ft_parse_printf.c \
		ft_print_char.c ft_print_id.c ft_print_percent.c ft_print_hexa.c \
		ft_print_ptr.c ft_print_string.c ft_print_unsigned.c ft_printf.c
		
FILES_BONUS= ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
			ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
			ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
CC= cc
FLAGS= -Wall -Wextra -Werror
INCLUDE= include
OBJS= $(FILES:.c=.o)
OBJS_BONUS= $(FILES_BONUS:.c=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	ar -rcs $(NAME) $(OBJS)

bonus : $(OBJS) $(OBJS_BONUS)
	ar -rcs $(NAME) $(OBJS) $(OBJS_BONUS)

%.o: %.c
	$(CC) $(FLAGS) -I . -c $< -o $@

clean :
	rm -f $(OBJS) $(OBJS_BONUS)

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY: all bonus clean fclean re