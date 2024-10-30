/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 12:12:01 by pnovato-          #+#    #+#             */
/*   Updated: 2024/10/28 12:55:59 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	i;
	size_t	size_max;
	void	*ptr;

	i = 0;
	size_max = nmemb * size;
	if (!nmemb || !size)
		return (NULL);
	if (size_max / size != nmemb)
		return (NULL);
	ptr = malloc(sizeof(size) * nmemb);
	ft_bzero(ptr, nmemb);
	return (ptr);
}
