/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:30:05 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 12:30:57 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memset(void *dest, int c, size_t count)
{
	size_t	i;

	i = 0;
	while (i < count)
	{
		*(unsigned char *)(dest + i) = (unsigned char)c;
		i++;
	}
	return (dest);
}
