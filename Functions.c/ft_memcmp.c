#include <string.h>

int	ft_memcmp(const void* s1, const void* s2, size_t n)
{
	unsigned char x = s1;
    unsigned char y = s2;

    int i = 0;
    while(i < n)
    {
        if(x[i] > y[i])
            return (x[i] - y[i]);
        if(x[i] < y[i])
            return (x[i] - y[i]);
        i++;
    }
    return (0);
}
/*
int main(int argc, char argv**)
{
	ft_memcmp(const void* s1, const void* s2, size_t n);
}*/