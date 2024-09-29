#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *c)
{
    int a;
    a = 0;
    while(c[a] != '\0')
    a++;
    return(a);
}
int word_count(char const *s, char c)
{
int a;
    int b;
    a = 0;
    b = 0;
    while(s[a] != '\0')
    {
      while(s[a] == c && s[a] != '\0')
      a++; 
      if(s[a] != c && s[a] != '\0')
      b++;
      while(s[a] != c && s[a] != '\0')
      a++;
    }
    return (b);
}
int word_len(char const *s,char c)
{
    int a;
    a = 0;
    while (s[a] && s[a] != c)
        a++;
    return (a);
    
}
char **ft_split(char const *s, char c)
{
    int i;
    int b;
    int l;
    int k;
    char **f;
    i = 0;
    k = 0;
    l = 0;
    b = 0;
    f = malloc(sizeof(char*)*(word_count(s,c) + 1));
    while(s[i] != '\0')
    {
        if(s[i] != c)
        {
            b = word_len(&s[i], c);
            f[l] = (char*)malloc(sizeof(char)*b + 1);
            while (s[i] && s[i] != c)
            f[l][k++] = s[i++];
            f[l++][k] = '\0';
            k = 0;
        } 
        else
            i++;
    }
    f[l] = 0;
    return(f);
}

int main()
{
    char **f;
    f = ft_split("aaaananasaaaaa",'a');
    for(int x = 0; f[x] ; x++)
    {
         printf("%s ,\n",f[x]); 
    }

}