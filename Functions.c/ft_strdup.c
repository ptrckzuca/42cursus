#include <string.h>
#include "ft_strlen.c"



char    *ft_strdup(const char *str)
{
    int n;
    int i = 0;
    const char str2;

    if(str2 == NULL)
    {
        return (1);
    }
    n = ft_strlen(str);
    str2 = malloc((n * 2) * sizeof(char));

    while(str[i] != '\0')
    {
        str2[i] = str[i];
        i++;    
    }
    str2[i] = '\0';
    return (str2);
    free(*str2);
}

/* 
int main(int argc, char argv**)
{
     *ft_strdup(const char *str);
} */