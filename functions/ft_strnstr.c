/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:57:38 by pnovato-          #+#    #+#             */
/*   Updated: 2024/10/28 19:04:11 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;

	i = ft_strlen(big);
	if (!big)
		return (NULL);
	while (*big && len > 0)
	{
		if (len >= i && ft_strncmp(big, little, i))
			return ((char *)big);
		big++;
		len--;
	}
	return ((char *)big);
}
