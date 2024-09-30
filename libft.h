#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>


int ft_atoi(char *a);
int ft_strlen(char *c);
int ft_isalnum(char d);
int ft_isalpha(char c);
int ft_isascii(char e);
int ft_isdigit(char e);
int ft_isprint(int c);
void ft_bzero(void *s, int n);
void	ft_calloc(int b, int size);
void *ft_memcpy(void *dest, const void *src, int n);
void *ft_memmove(void *dest, const void *src, int n);
char *ft_strjoin(char const *s1, char const *s2);
char *ft_substr(char const *s, unsigned int start,int len);
char *ft_strtrim(char const *s1, char const *set);
int ft_strlcpy(char *dst, const char *src, int size);
char **ft_split(char const *s, char c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
void ft_putstr_fd(char *c,int fd);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);

#endif