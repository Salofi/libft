#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void    ft_putchar(char c);
void    ft_putstr(char const *s);
void    ft_putendl(char const *s);
void    ft_putnbr(int n);
void    ft_putchar_fd(char c, int fd);
void    ft_putstr_fd(char const *s, int fd);
void    ft_putendl(char const *s, int fd);
void    ft_putnbr(int n, int fd);

#endif
