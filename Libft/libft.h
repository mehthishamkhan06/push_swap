#ifndef LIBFT_H
# define LIBFT_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>


size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2, int flag);
int	ft_isdigit(int c);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *src);




#endif