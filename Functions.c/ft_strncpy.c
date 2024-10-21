#include <string.h>


void    ft_strncpy(char* src, char* dest, size_t n)
{
    int i = 0;

    if (!dest)
        return (-1);
    while(i < n - 1)
    {
        src[i] = dest[i];
        i++;
    }
    src[i] = "\0";
    return (src);
}
/* 
int main(int argc, char argv**)
{
    ft_strncpy(char* src, char* dest, size_t n);
} */