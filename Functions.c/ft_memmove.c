#include "Libc.h"
#include <string.h>

//difference from memcpy is that the information passes through a buffer
//before going to de destination, in case of overlapping
char    *ft_aux_move(char *x, char *y, int n)
{
    int i = 0;
    while(i < n)
    {
        x[i] = y[i];
        i++;
    }
    return (*x);
}
void    *ft_memmove(void *dest, const void *src, size_t n)
{
    char *cdest = (char *)dest;
    char *csrc = (char *)src;

    char *temp;
    ft_aux_move(temp,src,n);
    ft_aux_move(dest,src,n);
}

/*
int main_ft_memmove(int argc, char **argv)
{
    
}*/