/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nishikawaharue <nishikawaharue@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 19:09:01 by nishikawaha       #+#    #+#             */
/*   Updated: 2020/01/14 21:57:26 by nishikawaha      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_print_comb01(char *a, char *b, char *c, char *d, char *e)
{
	*a = 48;
	*b = 49;
	*c = 50;
	*d = 44;
	*e = 32;

}

void	ft_print_comb02(char a, char b, char c, char d, char e)
{
	write (1, &a, 1);
	write (1, &b, 1);
	write (1, &c, 1);
	if (a == 55)
	{
		
	}
	else
	{
		write (1, &d, 1);
		write (1, &e, 1);
	}

}

void	ft_print_comb()
{
	char a;
	char b;
	char c;
	char d;
	char e;

	ft_print_comb01(&a, &b, &c, &d, &e);

	while (a <= 55)
	{
		while (b <= 56)
		{
			while (c <= 57)
			{
				ft_print_comb02(a, b, c, d, e);
				c++;
			}
			b++;
			c = b +1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}
