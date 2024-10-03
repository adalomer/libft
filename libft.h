/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 21:47:13 by omadali           #+#    #+#             */
/*   Updated: 2024/10/03 23:49:54 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stddef.h>

int ft_atoi(const char *a);
void ft_bzero(void *s, int n);
void	*ft_calloc(size_t nmemb, size_t size);
int ft_isalnum(int d);
int ft_isalpha(char c);
int ft_isascii(int b);
int ft_isdigit(char a);
int ft_isprint(int c);
char *ft_itoa(int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, int n);
void *ft_memset(void *s, int c, int n);
void ft_putchar_fd(char c, int fd);
void ft_putendl_fd(char *s, int fd);
void ft_putnbr_fd(int n, int fd);
void ft_putstr_fd(char *c,int fd);
char **ft_split(char const *s, char c);
char *ft_strchr(const char *a, int c);
char *ft_strdup(const char *s);
void ft_striteri(char *s, void (*f)(unsigned int, char*));
char *ft_strjoin(char const *s1, char const *s2);
int ft_strlcat(char *dst, const char *src, size_t size);
int ft_strlcpy(char *dst, const char *src, int size);
int ft_strlen(char *c);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
int ft_strncmp(const char *s1, const char *s2, int n);
char *ft_strnstr(const char * s1, const char * s2, size_t len);
char *ft_strrchr(const char *a, int c);
char *ft_strtrim(char const *s1, char const *set);
char *ft_substr(char const *s, unsigned int start,size_t len);
int ft_tolower(int a);
int	ft_toupper(int a);





#endif