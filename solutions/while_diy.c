/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while_diy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchakhno <vchakhno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:03:13 by vchakhno          #+#    #+#             */
/*   Updated: 2023/05/15 03:53:55 by vchakhno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Consigne:
//	Oh no, ma boucle est censée print que 10 nombres mais j'ai du me gourer...
//	Remplace un des noms de variable (qui commencent par underscore)
//	par un des autres pour que le programme print les nombres de 0 à 9
//	(et se termine) :D

int	main(void)
{
	int	x = 0;

	_start:
	{	goto *(void *[]){&&_end, &&_inside}[x < 10];
		_inside:
		printf("x: %d\n", x);
	}	x++;
	goto _start;
	_end:;
}
