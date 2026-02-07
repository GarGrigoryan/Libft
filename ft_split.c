#include "libft.h"
#include <stdlib.h>

static unsigned int     ft_word_count(char const *s, char c)
{
    unsigned int    i;
    unsigned int    count;

    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c
        && (s[i + 1] == c || s[i + 1] == '\0'))
            count++;
        i++;
    }
    return (count);
}

static unsigned int     ft_word_len(char const *s, char c)
{
    unsigned int    i;

    i = 0;
    while (s[i] && s[i] != c)
        i++;
    return (i);
}

static char     **ft_free(char **str, int i)
{
    while (i > 0)
    {
        i--;
        free(str[i]);
    }
    free(str);
    return (NULL);
}

static char **ft_fill(char const *s, char c, char **str)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i])
    {
        if (s[i] == c)
            i++;
        else
        {
            str[j] = ft_substr(s, i, ft_word_len(&s[i], c));
            if (!str[j])
                return (ft_free(str, j));
            i += ft_word_len(&s[i], c);
            j++;
        }
    }
    str[j] = NULL;
    return (str);
}

char    **ft_split(char const *s, char c)
{
    char    **str;

    if (!s)
        return (NULL);
    str = malloc((ft_word_count(s, c) + 1) * sizeof(char *));
    if (!str)
        return (NULL);
    return (ft_fill(s, c, str));
}
