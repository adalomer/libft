char *ft_strlcat(char *dst, const char *src, int size)
{
    int a;
    int b;
    a = 0;
    b = 0;
    while(dst[a] != '\0')
    a++;
    while(a <= size || src[b] != '\0')
    {
        dst[a]= src[b];
        a++;
        b++;
    }
    return(dst);
}
#include <stdio.h>
int main()
{
    printf("%s",ft_strlcat("ana","baba",7));
}