#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
#include "../ft_printf/ft_printf.h"

/*VARI FILE DA INSERIRE IN UN SECONDO MOMENTO*/

long	ft_atol(const char *str);
char	**ft_split(const char *s, char c);
size_t  count_words(const char *s, char c);
char	*ft_substr(const char *s, unsigned int start, size_t len);
char    *ft_strchr(const char *s, int c);
size_t    ft_strlen(const char *s);


#endif