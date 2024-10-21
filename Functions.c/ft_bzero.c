#include <string.h>
#include "Libc.h"

void ft_bzero(void *s, size_t n)
{
    int i = 0;
    while(i <= n)
    {
        s[i] = 0;
        i++;
    }
}

/*
int main_ft_bzero(int argc, const char **argv)
{
    ft_bzero();
}*/