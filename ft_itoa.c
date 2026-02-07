#include "libft.h"

static size_t   ft_getlength(long num)
{
    size_t  len;

    len = 0;
    if (num == 0)
        return (1);
    if (num < 0)
    {
        len++;
        num = -num;
    }
    while (num >= 1)
    {
        len++;
        num /= 10;
    }
    return (len);
}

static char *ft_num_to_str(long num, char *str, size_t len)
{
    str = ft_calloc(len + 1, sizeof(char));
    if (!str)
        return (NULL);
    if (num < 0 )
    {
        str[0] = '-';
        num = -num;
    }
    len--;
    while (len)
    {
        str[len] = (num % 10) + '0';
        num /= 10;
        len--;
    }
    if (str[0] != '-')
        str[0] = (num % 10) + '0';
    return (str);
}

char	*ft_itoa(int n)
{
    long    num;
    size_t  len;
    char    *str;

    num = n;
    len = ft_getlength(num);
    str = NULL;
    str = ft_num_to_str(n, str, len);
    if (!str)
        return (NULL);
    return (str);
}