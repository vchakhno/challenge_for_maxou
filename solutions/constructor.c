/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vchakhno <vchakhno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/15 03:11:26 by vchakhno          #+#    #+#             */
/*   Updated: 2023/05/15 03:22:21 by vchakhno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Consigne: tu as le droit de rajouter une seule ligne de code,
// et pas entre les accolades du main
// Il faut que le code print "Coucou Maxou"

int	main(void)
{
	
}

__attribute__((constructor))
void	foo()
{
	printf("Coucou Maxou\n");
}
