/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 10:52:03 by pnovato-          #+#    #+#             */
/*   Updated: 2024/10/26 12:07:45 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  len;

    i = 0; 
    len = 0;
    while(src[len] != '\0')
        len++;
    while(i < size -1 && src[i] != '\0')
    {
        dst[i] = src[i];
        i++;
    }   
    dst[i] = '\0';
    return  (len);
}

