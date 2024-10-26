/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:07:24 by pnovato-          #+#    #+#             */
/*   Updated: 2024/10/26 15:09:23 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
#include <string.h>

int	main()
{
	char s[20] = "Hello world!";
	char b[20] = "p";

	//printf("%d\n",ft_strlen("ola"));
	//printf("%d\n",ft_isalpha('a'));
	//printf("%d\n",ft_isdigit('a'));
	//printf("%d\n",ft_isascii(128));
	//printf("%d\n",ft_isalnum('0'));
	//printf("%d\n",ft_isprint('\0'));
	//printf("%d\n",ft_strlen(""));

	/* ft_memset(s+6, '*', 4);
	printf("%s\n",s); */

	/* char c[20] = "hello world!";
	ft_bzero(c,3);
	printf("%s\n",c); */

	/* ft_memcpy(b,s,5);
	printf("%s\n",b); */

	/* ft_memmove(s+2,s,2);
	printf("%s\n",b);
	printf("%s\n",s); */

	/* ft_strlcpy(b,s,14);
	printf("%s\n",b);
	printf("%s\n",s); */

	printf("%zu %s\n",ft_strlcat(b,s,14), b);

}
