#include "ft_stock_par.h"
#include <stdio.h>

int		main(int ac, char **av)
{
		ft_show_tab(ft_param_to_tab(ac, ft_split_whitespaces(av[1])));
		printf("d\n");
		return(0);
}