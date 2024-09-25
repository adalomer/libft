
int ft_isdigit(char *a)
{
    int b;
    b = 0;
    while (a[b] != '\0')
    {
        if(a[b] >= 48 && a[b] <= 57)
        return (1);
        b++;
    }
    return (0);
}
