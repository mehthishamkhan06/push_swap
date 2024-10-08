#include "../push_swap.h"

static int	w_count(char *str, char c)
{
	int	i;
	int	not_seen;
	int	count;

	count = 0;
	not_seen = 1;
	i = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			if (not_seen == 1)
			{
				not_seen = 0;
				count++;
			}
		}
		else
			not_seen = 1;
		i++;
	}
	return (count);
}

char	**splitter(char *s, char c, char **str, int *i)
{
	while (i[0] < i[4])
	{
		i[1] = 0;
		while (s[i[2]] == c && s[i[2]])
			i[2]++;
		while (s[i[2]] != c && s[i[2]])
		{
			i[1]++;
			i[2]++;
		}
		str[i[0]] = (char *)malloc(sizeof(char) * (i[1] + 1));
		if (!str[i[0]])
		{
			while (i[0]-- > 0)
				free(str[i[0]]);
			return (free(str), NULL);
		}
		i[2] -= i[1];
		i[3] = 0;
		while (s[i[2]] != c && s[i[2]])
			str[i[0]][i[3]++] = s[i[2]++];
		str[i[0]++][i[3]] = '\0';
	}
	str[i[0]] = 0;
	return (str);
}

char	**ft_split(char *s, char c)
{
	char	**str;
	int		i[5];
	int		j;

	j = 0;
	while (j < 5)
		i[j++] = 0;
	if (!s)
		return (NULL);
	i[4] = w_count(s, c);
	str = (char **)malloc(sizeof(*str) * (i[4] + 1));
	if (!str)
		return (NULL);
	return (splitter(s, c, str, i));
	free(str);
}
