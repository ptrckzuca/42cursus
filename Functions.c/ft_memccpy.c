#include <string.h>
#include "Libc.h"

void    *ft_memccpy(void *dest, const void *src, int c, size_t n)
{
    int i = 0;
    while(i <= n)
    {
        if(src[i] = c)
        {
            return (*dest[i+1]);
        }
        if(src[i] != c)
        {
            dest[i] = src[i];
            i++;
        }
    }
    return (NULL);
}

/*
int main_ft_memccpy(int argc, const char **argv)
{
    ft_memccpy();
}*/