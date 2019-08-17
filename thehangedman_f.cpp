#include "thehangedman_f.hpp"

int     lenght(char *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}
char    *create_result(char *str)
{
    char *result;
    int i = 0;

    result = (char*)malloc(lenght(str) * sizeof(char));
    for(i = 0; str[i]; i++)
    {
        result[i] = '_';
    }
    result[i] = '\0';
    return result;
}

int    check_t(char t, char *mot)
{
    for(int i = 0; mot[i]; i++)
    {
        if (t == mot[i])
            return 1;
    }
    return 0;
}

char    *add_result(char t, char *mot, char *result)
{
    int i = 0;
    while(mot[i])
    {
        if(mot[i] == t && result[i] == '_')
            result[i] = t;
        i++;
    }
    return result;
}