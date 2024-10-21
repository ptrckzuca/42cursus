#include <string.h>
#include "Libc.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    int i = 0;
    while(i <= n)
    {
        dest[i] = src[i];
        i++;
    }
    return (*dest);
}

/*
int main_ft_memcpy(int argc, const char **argv)
{
    ft_memcpy();
}*/