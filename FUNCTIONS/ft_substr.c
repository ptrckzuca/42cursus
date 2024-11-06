/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 10:33:01 by pnovato-          #+#    #+#             */
/*   Updated: 2024/11/06 17:43:17 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		i;
	char		*ptr;

	ptr = malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	i = 0;
	if ((size_t)start >= ft_strlen(s))
	{
		ptr[0] = '\0';
		return (ptr);
	}	
	while (i < len)
	{
		ptr[i] = s[((size_t)start) + i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
