/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:09:34 by pnovato-          #+#    #+#             */
/*   Updated: 2024/11/08 15:20:55 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
unsigned int	cont_word(char const *s, char c)
{
	unsigned int	i;
	unsigned int	count_words;

	count_words = 0;
	i = 0;
	while (s[i])
	{
		if((char)s[i] != c)
		{
			count_words++;
			while (ft_isprint(s[i]) && (char)s[i] != c && s[i])
				i++;
		}
		i++;
	}
	return (count_words);	
}

char	*modified_strdup(const char *str, char c)
{
	int		n;
	int		i;
	char	*str2;

	n = 0;
	while ((char)str[n] != c)
		n++;
	str2 = malloc((n + 1) * sizeof(char));
	if (str2 == NULL)
		return (NULL);
	i = 0;
	while ((char)str[i] != c)
	{
		str2[i] = str[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

void	ft_free(char **ptr)
{
	int i = 0;
	while(ptr[i])
		free(ptr[i++]);
}

char	**ft_split(char const *s, char c)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	x;
	char	**ptr = NULL;

	j = 0;
	i = cont_word(s,c);
	x = 0;
	ptr = malloc(sizeof(char *) * (i + 1));
	if (!(ptr))
		return (NULL);
	while (s[j] && x < i)
	{
		while ((char)s[j] == c && s[j])
			j++;
		ptr[x] = modified_strdup(&s[j], c);
		if (!ptr[x])
			return (ft_free(ptr), NULL);
		while (s[j] && s[j] != c)
			j++;
		x++;
	}
	return (ptr);
}
