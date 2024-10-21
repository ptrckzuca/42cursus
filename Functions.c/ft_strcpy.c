#include <string.h>

char    *ft_strcpy(char *dest, char *src)
{
    int i = 0;

    if(!src)
        return(1);
    while(src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/* 
int main(int argc, char argv**)
{
    *ft_strcpy(char *dest, char *src);
} */