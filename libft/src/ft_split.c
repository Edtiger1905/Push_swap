
#include "../includes/libft.h"

size_t count_words(const char *s, char c)
{
    size_t count;

    if (!*s)
        return (0);
    count = 0;
    while (*s)
    {
        if (*s == c)
            ++s;
        if (*s)
            ++count;
        while (*s && *s != c)
            ++s;
    }
    return (count);
}
char **ft_split(const char *s, char c)
{
    char **array;
    size_t i;
    size_t len;

    array = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
    if (!s || !array)
        return (0);
    i = 0;
    while (*s)
    {
        while (*s == c && *s)
            ++s;
        if (*s)
        {
            if(!ft_strchr(s, c))
                len = ft_strlen(s);
            else
                len = ft_strchr(s, c) - s;
            array[i++] = ft_substr(s, 0, len);
            s += len;
        }
    }
    array[i] = NULL;
    return (array);
}