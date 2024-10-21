#include <string.h>
#inlcude "ft_strlen.c"

char    ft_strlcat(char *dest, const char *src)
{
    unsigned int dlen; 
    unsigned int i;
    char buffer;
    i = 0;
    dlen = 0;
    if(!dest || !src)  //NULL STRING
        return (-1);
    while(dest[i] != "\0")
    {
        buffer[i] = dest[i];
        i++;
    }
    while(src[dlen] != "\0")
    {
        buffer[i] = src[dlen];
        i++;
        dlen++;
    }
    buffer[i] = "\0";
    return (dest);
}
/* 
int main(int argc, char argv**)
{
    ft_strlcat(char *dest, const char *src);
} */