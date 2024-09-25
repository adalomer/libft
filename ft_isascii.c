
int ft_isascii(char *b)
{
    int a;
    a = 0;
    while(b[a] != '\0')
    {
        if ( b[a] >=0 && b[a]<= 127)
        return(1);
        a++;
    }
    return(0);
}