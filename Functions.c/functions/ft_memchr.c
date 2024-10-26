#include <string.h>
#include "Libc.h"

//Scan the the n bytes of *s and return a pointer to the found unsigned char c or NULL if doenst find anything.

void    *ft_memchr(const void *s, int c, size_t n)
{
    int i = 0;
    while(i < n)
    {
        if(s[i] == (unsigned char *)c)
            return (*s[i]);
        i++;
    }
    return (NULL);
}


//int main_ft_memchr(const void *s, int c, size_t n);