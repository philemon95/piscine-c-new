/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: phperrot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/06 14:12:00 by phperrot          #+#    #+#             */
/*   Updated: 2018/07/07 12:17:36 by phperrot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
int	leng(char *str)
{
		int i;

		i = 0;
		while (str[i] != '\0')
		{
				i++;
		}
		return (i);
}

int  powerten(int power)
{
	int tens;
	int j;
	
	tens = 1;
	j=0;
while (j < power)
	{   
	tens = tens * 10;
	j++;
	}
	return (tens);
}

int	ft_atoi(char *str)
{
int j;
int len;
int cardinal;
int number;
int tens;
int int_already_printed;
int minus;

int_already_printed = 0;
len = leng(str);
number=0;
j=0;
tens = powerten(len-1);

	printf("tens %d \n\n\n",tens);

minus = 0;
while (j < len)
	{
	cardinal= str[j]-'0';
	if (cardinal >= 0 && cardinal <= 9)
	{
		number = number + cardinal * tens;
		int_already_printed++;
	}
	if (cardinal == -3)
	{
		minus = minus + 1;
	}

	if ((cardinal < 0 | cardinal >9) && int_already_printed  > 0)
		{
			number = number / (powerten(len-j));
			j= len;
		}
	tens = tens / 10;
	
	printf("j: %d \n",j);\
	printf("int_already_printed %d \n",int_already_printed);
	printf("cardinal %d \n",cardinal);
	printf("number %d \n",number);
	printf("tens %d \n",tens);
	j++;
	}
j=0;
while (j < minus) 
	{
		number = number * -1;
		j = j +1;
	}

return (number);

}
