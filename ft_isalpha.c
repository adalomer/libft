
int ft_isalpha(char *c)
{
    int a;
    a = 0;
    while(c[a] != '\0')
    {
        if (c[a] >= 65 && c[a] <= 90 || c[a] >= 97 && c[a] <= 122)
        return(1);
        a++;
    }
    return (0);
}