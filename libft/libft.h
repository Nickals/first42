#ifndef LIBFT_H
#define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <ctype.h>
#include <stddef.h>
#include <stdio.h>
#include <limits.h>

int	ft_isalpha(int c);
int	ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);
int ft_toupper(int c);
int ft_tolower(int c);

int	ft_strncmp(char *s1, char *s2, unsigned int n);
size_t	ft_strlen(const char *s);
size_t ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t ft_strlcpy(char * dest, const char * src, size_t size);

#endif
