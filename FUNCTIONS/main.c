/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnovato- <pnovato-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:07:24 by pnovato-          #+#    #+#             */
/*   Updated: 2024/11/06 19:42:09 by pnovato-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"


int	main()
{
	char	**ptr;
	unsigned int	i = 0;
	unsigned int	j = 0;
	const char s[50] = "patric/k Ste fanie jorge mar cos";
	/*const*/char b = ' ';
	//int a = 'e';
	//size_t *a;

	//printf("%d\n",ft_strlen("ola"));
	//printf("%d\n",ft_isalpha('a'));
	//printf("%d\n",ft_isdigit('a'));
	//printf("%d\n",ft_isascii(128));
	//printf("%d\n",ft_isalnum('0'));
	//printf("%d\n",ft_isprint('\0'));

	/*ft_memset(s+6, '*', 4);
	printf("%s\n",s);*/ 

	/*char c[20] = "hello world!";
	ft_bzero("Se o valor for encontrado", memcpy(b,s,14);
	printf("%s\n",b);
	printf("%s\n",s);*/

	//printf("%zu %s\n",ft_strlcat(b,s,14), b);

	//printf("%c\n",ft_toupper(a));
	
	//printf("%c\n",ft_tolower(a));

	//printf("%s\n",ft_strchr(s,'w'));
	//printf("%s\n",strchr(s,'w'));

	//printf("%s\n",ft_strrchr(s,'d'));
	//printf("%s\n",strrchr(s,'d'));

	//printf("%d\n",ft_strncmp(s,b,3));
	//printf("%d\n",strncmp(s,b,3));

	//printf("%s\n",(char *)ft_memchr(s,a,3));
	//printf("%s\n",(char *)memchr(s,a,3));
	
	/* char	*ptr = (char *)ft_memmove(s+2,s,3);
	printf("%s\n",ptr);int
	for(size_t i = 0; i < strlen(ptr); i++)
	{
		printf("%c -> [%li]\n",ptr[i], i);
	} */
	
	//printf("%s\n",(char *)memmove(s+2,s,3));

	//printf("%d\n",ft_memcmp(s,b,3));
	//printf("%d\n",memcmp(s,b,3));

	/* a = (size_t *)ft_calloc(4,sizeof(size_t));
	for(int i= 0; i < 4; i++)
		printf("%lu ",a[i]);

	printf("\n");

	a = (size_t *)calloc(4,sizeof(size_t));
	for(int i= 0; i < 4; i++)
		printf("%lu ",a[i]); */

	/*char *ptr = ft_strnstr(s,b,7);
	char *tr = strnstr(s,b,7);
	printf("%s\n", ptr);
	printf("%s\n", tr);*/
	
	//printf("%s\n",ft_substr(s,2,5));

	//printf("%s\n",ft_strjoin(s,b));

	//printf("%s\n",ft_strtrim(s,b));

	ptr = ft_split(s,b);
	while (ptr[i])
	{
		printf("%s",ptr[i]);
		printf("\n");
		i++;
	}

}

