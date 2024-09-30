/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omadali <adalomer60@gmail.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 13:11:07 by omadali           #+#    #+#             */
/*   Updated: 2024/09/30 17:14:33 by omadali          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int word_count(char *s, char c)
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
int word_len(char *s,char c)
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
    int k;
    char **f;
    k = 0;
    i = 0;
    b = 0;
    f = (char **)malloc(sizeof(char*)*(word_count(s,c)+1));
    while(s[i] != '\0')
    {
        if(s[i] != c)
        {
            b = word_len(&s[i], c);
            f[k] = (char *)malloc(b + 1);
            b = 0;
            while (s[i] && s[i] != c)
            f[k][b++] = s[i++];
            f[k++][b] = '\0';
        } 
        else
        i++;
    }
    f[k] = 0;
    return (f);
}
int main()
{
  ft_split("anabanan",'a');
}