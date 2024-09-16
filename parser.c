#include "push_swap.h"
#include <stdlib.h>
static int	count(char const *s, char c)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (s[i])
	{
		if (i == 0 && s[i] != c)
			l++;
		if (s[i] == c && s[i + 1] != c && s[i + 1])
			l++;
		i++;
	}
	return (l);
}

char	**splitter(char const *s, char c, char **str, int *i)
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
		i[2] -= i[1];
		i[3] = 0;
		while (s[i[2]] != c && s[i[2]])
		{
			str[i[0]][i[3]] = s[i[2]];
			i[3]++;
			i[2]++;
		}
		str[i[0]++][i[3]] = '\0';
	}
	str[i[0]] = 0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		i[5];
	int		j;

	j = 0;
	while (j < 5)
		i[j++] = 0;
	if (!s)
		return (NULL);
	i[4] = count(s, c);
	str = (char **) malloc(sizeof(*str) * (i[4] + 1));
	if (!str)
		return (NULL);
	return (splitter(s, c, str, i));
}
#include "push_swap.h"
#include <ctype.h>

void parser(int argc, char *argv[]) {
    if (argc > 1) {
        int i = 1;
        
        while (i < argc) { // Iterate through each argument
            int j = 0;
            int sign_index = 0;

            // Check if the first character is a sign ('+' or '-')
            if (argv[i][0] == '-' || argv[i][0] == '+') {
                sign_index = 1;
                j++; // Move past the sign character
            }

            // Now check if the rest is a valid number (after the sign)
            while (argv[i][j] != '\0') { // Go until null terminator
                if (!ft_isdigit(argv[i][j]))
                {
                    write(1, "Error\n", 6);
                    exit(1);
                }
                j++;
            }
            char **lock = malloc(sizeof(char *) * 100);
            lock = ft_split(argv[i], ' ');
            int value = ft_atoi(argv[i]);
            if (value == 0 && argv[i][sign_index] != '0') {
                // Handle the case where atoi returns 0 but the input wasn't "0"
                write(1, "Error\n", 6);
                exit(1);
            }

            // Debugging print to show parsed numbers
            printf("Parsed number: %d\n", value);

            i++; // Move to the next argument
        }
    }
}


int main(int argc, char *argv[])
{
    parser(argc, argv);

    return (0);
}


// int main(int argc, char *argv[])
// {
//     parser(argc, argv);
//     return (0);
// }