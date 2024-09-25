
int ft_isalnum(char *d)
{
    int a;
    a = 0;
    while(d[a] != '\0')
    {
        if((d[a]>47 && d[a]< 58) || (d[a]>64 && d[a] < 91) || d[a]>96 && d[a]< 123)
        return(1);
        a++;
    }
    return(0);
}