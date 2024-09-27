char ft_strlcat(char *dst, const char *src, int size)
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
    return();
}
#include <stdio.h>
int main()
{
    char a[15] = "anans";
    char b[5] = "baban";
    printf("%d",ft_strlcat(a,b,15));
}