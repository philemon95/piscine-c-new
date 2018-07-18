#include <stdio.h>
int		ft_putchar(char c);

void	ft_putstr(char *str);

char **ft_split_whitespaces(char *str);

int	main(void)
{
	char **res;
	char *str;
	int i;
	int j;

	str = "                     bonjour 9a ca";
	res = ft_split_whitespaces(str);
	i = 0;
	j = 0;
	while (i <  3)
	{
		while (res[i][j] != '\0')
		{
			ft_putchar(res[i][j]);
			j++;
		}
		ft_putchar('\n');
		j = 0;
		i++;
	}
}
