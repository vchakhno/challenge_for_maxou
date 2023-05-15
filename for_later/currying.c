/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while_diy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchakhno <vchakhno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:03:13 by vchakhno          #+#    #+#             */
/*   Updated: 2023/05/15 04:06:21 by vchakhno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	(*add(int a))(int)
{
	int add_x(int b)
	{
		return (a + b);
	}
	return (add_x);
}

int	foo(int bar)
{
	printf("Bar: %d\n", bar);
}

int	main(void)
{
	int (*func_a)(int) = add(8);
	int (*func_b)(int) = add(0);

	printf("%d\n", func_a(5));
	foo(42);
	printf("%d\n", func_b(5));
}
