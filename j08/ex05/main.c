#include "ft_stock_par.h"
#include <stdio.h>

struct s_stock_par *ft_param_to_tab(int ac, char **av);

int    main(int argc, char **argv)
{
	printf("%d", ft_param_to_tab(argc, argv)[1].size_param);
	return (0);
}
