/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 11:44:50 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 11:45:36 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t		i;
	char		*total;
	size_t		taille;

	taille = count * size;
	total = malloc(taille);
	if (total == NULL)
		return (NULL);
	i = 0;
	while (i < taille)
	{
		total[i] = 0;
		i++;
	}
	return (total);
}
