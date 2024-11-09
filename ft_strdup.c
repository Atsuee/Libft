/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:33:52 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 12:34:36 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strdup(const char *s1)
{
	int		taille;
	char	*total;

	taille = 0;
	while (s1[taille])
		taille++;
	total = (char *)malloc(sizeof(char) * (taille + 1));
	if (total == NULL)
		return (NULL);
	taille = 0;
	while (s1[taille])
	{
		total[taille] = s1[taille];
		taille++;
	}
	return (total);
}
