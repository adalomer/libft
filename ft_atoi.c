

int ft_atoi(char *a)
{
    int b = 0;
    int c = 1;
    int d = 0;

    while( a[b]>= 9 && a[b] <= 13 || a[b] == 32)
        b++;
    if (a[b] == '-')
    {
        c = c * -1;
        b++;
    }
    else if (a[b] == '+')
    b++;

    while (a[b] >= '0' && a[b]<= '9')
    {
        d = d * 10 + (a[b] - '0');
        b++;
    }
    return d * c;
}