#include "push_swap.h"


char	*ft_strjoin(char *s1, char *s2, int check_free)
{
    char	*str;
    int		i;
    int		j;

    i = 0;
    j = 0;
    if (!s1)
        return (ft_strdup("\0"));
    str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL);
    while (s1[i])
    {
        str[i] = s1[i];
        i++;
    }
    while (s2[j])
        str[i++] = s2[j++];
    str[i] = '\0';
    if (check_free == 1)
        free(s1);
    return (str);
}