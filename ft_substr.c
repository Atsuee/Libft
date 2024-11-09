/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:23:50 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 14:24:35 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_substr(char const *str, unsigned int depart, size_t len)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < len && str[depart + i])
	{
		result[i] = str[depart + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
