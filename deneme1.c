#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include <ctype.h>

int ft_strlen(char *c)
{
    int a;
    a = 0;
    if ( !c)
    return(0);
    while(c[a] != '\0')
    a++;
    return(a);
}

int ft_strlcat(char *dst, const char *src, int size)
{
    int a;
    int b;
    int d;
    a = ft_strlen(dst);
    b = ft_strlen((char *)src);
    d = a + b;
    if(size == 0)
    d = b;
    b = 0;
    if ( size < 0)
    size = 2147483647;
    if (size <= a)
        return (b + size);
    while(a < size - 1 && src[b] != '\0')
    {
        dst[a]= src[b];
        a++;
        b++;    
    }
    dst[a] = '\0';
    return(d);
}
int main()
{
  int d;
  char dest[30]; memset(dest, 0, 30);
    char * src = (char *)"AAAAAAAAA";
 d = ft_strlcat(dest, src, 3);
 printf("%d",d);
 printf("%s,%s",dest,src);
}