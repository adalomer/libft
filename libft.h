#ifndef LIBFT_H
#define LIBFT_H

#include <stdio.h>
#include <unistd.h>
#include <ctype.h>


int ft_atoi(char *a);
int ft_isalnum(char d);
int ft_isalpha(char c);
int ft_isascii(char e);
int ft_isdigit(char e);
int ft_isprint(int c);
void ft_bzero(void *s, int n);
void	ft_calloc(int b, int size);
void *ft_memcpy(void *dest, const void *src, int n);
void *ft_memmove(void *dest, const void *src, int n);

#endif