/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 12:07:02 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 12:13:04 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

static char	get_longueur(int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	while (nbr)
	{
		nbr = nbr / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	char	*result;
	long	num;

	num = nbr;
	len = get_longueur(nbr);
	result = (char *)malloc(sizeof(char *) * (len + 1));
	if (!result)
		return (NULL);
	if (nbr == 0)
	{
		result[0] = 0;
		return (result);
	}
	if (num < 0)
	{
		result[0] = '-';
		num *= -1;
	}
	while (num > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}
