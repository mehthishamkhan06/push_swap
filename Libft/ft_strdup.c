#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*res;

	i = 0;
	while (src[i])
		i++;
	res = malloc(sizeof(char) * (i + 1));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		res[i] = src[i];
		i++;
	}
	res[i] = '\0';
	return (res);
}