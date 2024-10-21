#include <string.h>
#include "strlen.c"
char    ft_strncat(char *dest, char *src, unsigned size_t n)
{
    int dlen = 0;
    unsigned int i;

    i = 0;
    dlen = ft_strlen(dest);
    if(!src)
        return (-1);
    while(i < n && src[i] != "\0")
    {
        dest[dlen + i] = src[i];
        i++;
    }
    dest[dlen + i] = "\0";
    return (dest);
}
/* 
int main(int argc, char argv**)
{
    ft_strncat(char *dest, char *src, unsigned size_t n);
} */