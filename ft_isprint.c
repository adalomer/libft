
int ft_isprint(char *c)
{
    int a;
    a = 0;
    while(c[a] != '\0')
    {
        if(c[a] >= 32 && c[a] != 127)
        return (1);
        a++;
    }
    return(0);
}