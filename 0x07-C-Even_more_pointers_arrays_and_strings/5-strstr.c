#include <stdio.h>
#include "main.h"

char *_strstr(char *haystack, char *needle)
{
    int i, lw, lw2, check, cnt = 0;

    while (needle[cnt] != '\0')
    {
        cnt++;
    }
    if (cnt == 0)
        return haystack;

    while (*haystack != '\0')
    {
        i = 0;
        while (needle[i] != '\0')
        {
            if (*haystack == needle[i])
            {
                lw = 0, lw2 = 0, check = 0;
                while ((*(haystack + lw) != '\0') && (*(needle + i + lw2) != '\0'))
                {
                    if (*(haystack + lw) != *(needle + i + lw2))
                    {
                        check = 1;
                        break;
                    }
                    lw++, lw2++;
                }
                if (check == 0 && *(needle + i + lw) == '\0')
                {
                    return haystack;
                }
            }
            i++;
        }
        haystack++;
    }
    return NULL;
}
