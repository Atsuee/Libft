/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wailas <wailas@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 14:30:20 by wailas            #+#    #+#             */
/*   Updated: 2024/11/09 14:51:58 by wailas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> 
#include <string.h>

int	main(void)
{
	char	*result;

	result = ft_strjoin("Walid", "Hind");
	printf("%s \n", result);
	free(result);
	return (0);
}
