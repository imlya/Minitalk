/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imatek <imatek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/21 13:26:44 by imatek            #+#    #+#             */
/*   Updated: 2024/07/26 17:54:22 by imatek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10

# endif

# include <fcntl.h>
# include <stdarg.h>
# include <stdint.h>
# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// typedef struct s_list
// {
// 	void			*content;
// 	struct s_list	*next;
// }					t_list;

int		ft_atoi(const char *nptr);
long	ft_atol(const char *nptr);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_get_line(char *stash);
char	*get_next_line(int fd, int error);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
int		ft_len(int nbr);
int		ft_len_base_unsigned(unsigned long nbr, int base);
// t_list	*ft_lstnew(void *content);
// void	ft_lstadd_front(t_list **lst, t_list *new);
// int		ft_lstsize(t_list *lst);
// t_list	*ft_lstlast(t_list *lst);
// void	ft_lstadd_back(t_list **lst, t_list *new);
// void	ft_lstdelone(t_list *lst, void (*del)(void *));
// void	ft_lstclear(t_list **lst, void (*del)(void *));
// void	ft_lstiter(t_list *lst, void (*f)(void *));
// t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *s, int c, size_t n);
char	*ft_new(char *stash);
int		ft_parse_printf(char flag, va_list pa);
int		ft_print_char(va_list pa);
int		ft_print_hexa(va_list pa, char flag);
int		ft_print_id(va_list pa);
int		ft_print_percent(void);
int		ft_print_ptr(va_list pa);
int		ft_print_string(va_list pa);
int		ft_print_unsigned(va_list pa);
int		ft_printf(const char *format, ...);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putnbr(int nb);
void	ft_putnbr_base_unsigned(unsigned long nb, char *base);
void	ft_putstr(char *s);
void	ft_putstr_fd(char *s, int fd);
char	*ft_read(int fd, char *stash);
size_t	ft_strlcat(char *dst, char *src, size_t size);
size_t	ft_strlcpy(char *dst, char *src, size_t size);
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strjoin_free(char *stash, char *buf);
size_t	ft_strlen(const char *s);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int		ft_strcmp(char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(char *haystack, char *needle, size_t len);
char	*ft_strdup(const char *s);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif