#include <string.h>

size_t ft_strlen(const char *str)
{
    int i = 0;
    if(!str)
        return (1);
    while(str[i] != '\0')
    {
        i++;
    }
    return (i);
}
/* 
int main(int argc, char argv**)
{
    ft_strlen(const char *str);
} */