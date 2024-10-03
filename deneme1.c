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
	printf("%d\n",a);
	printf("%d\n",b);
    d = a + b;
	if(size == 0)
	d = b;
    b = 0;
	if ( size < 0)
	size = 2147483647;
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
char dest[30]; memset(dest, 0, 30);
char dest1[30]; memset(dest1, 0, 30);
char * src = (char *)"AAAAAAAAA";
char * src1 = (char *)"AAAAAAAAA";
dest[0] = 'B';
dest1[0] = 'B';


  printf("%d\n",ft_strlcat(dest, src, 3));
  printf("%ld\n", strlcat(dest1,src1,3));
  printf("%s,%s\n",dest1,src1);
  printf("%s,%s",dest,src);
  
}