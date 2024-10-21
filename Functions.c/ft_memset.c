#include <string.h>
#include "Libc.h"


void *ft_memset(void *s, int c, size_t n)
{
	int i = 0;
	while(i <= n)
	{
		s[i] = c;
		i++;
	}
	return (*s);
}

/*
int main_ft_memset(int argc, const char **argv)
{
	ft_memset();
}*/