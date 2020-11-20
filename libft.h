#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <string.h>
int	ft_atoi(const char *str);
char	*ft_strdup(const char *s1);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
//remettre le header
void	*ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
void	*ft_memcpy(void *dst, const void *src, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memccpy(void *dst, const void *src,int c, size_t n);
void	*ft_memchr(const void *s, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*memset(void *b, int c, size_t len);
char	*strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
size_t	strlcat(char *dst, const char *src, size_t dstsize);
size_t	strlcpy(char *dest, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
int	strncmp(const char *s1, const char *s2, size_t n);
char	*strrchr(const char *s, int c);
int	ft_tolower(int c);
int	ft_toupper(int c);
#endif