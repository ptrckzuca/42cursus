/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:47:23 by pnovato-          #+#    #+#             */
/*   Updated: 2024/11/06 18:32:19 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	unsigned char	i;
	unsigned char	j;

	i = 0;
	j = ft_strlen(s1);
	if (s1 == NULL || set == NULL)
		return (NULL);
	while (s1[i] && ft_strchr(set,s1[i]))
		i++;
	while (j > 0 && ft_strchr(set,s1[j - 1]))
		j--;
	ptr = ft_substr(s1,i,(j - i));
	return (ptr);
}