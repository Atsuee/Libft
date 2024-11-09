/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:13:56 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 12:16:07 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

void	*ft_memchr(const void *ptr, int c, size_t n)
{
	size_t	i;

	i = 0;
	if (!ptr)
		return (NULL);
	while (i < n)
	{
		if (*(unsigned char *)(ptr + i) == (unsigned char )c)
			return ((void *)(ptr + i));
		i++;
	}
	return (NULL);
}
