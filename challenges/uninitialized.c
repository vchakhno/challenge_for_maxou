/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   uninitialized.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchakhno <vchakhno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:03:13 by vchakhno          #+#    #+#             */
/*   Updated: 2023/05/15 05:33:58 by vchakhno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Consigne:
// Tu dois faire en sorte que le programme print "[5, 6, 7]" en écrivant
// seulement du code entre les accolades d'init_values.

void	init_values(void)
{
	
}

void	print_values(void)
{
	int	values[3];

	printf("[%d, %d, %d]\n", values[0], values[1], values[2]);
}

int	main(void)
{
	init_values();
	print_values();
}
