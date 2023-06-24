#include "main.h"

/**
* _strcat - links two strings
* @dest: input value
* @src: input value
*
* Retun: void
*/

char *_strcat(char *dest, char *src)
{
        int i;
        int j;

        i =0
        while (dest[i] !='\0')
        {
                1++;
        }
        j=0;
        while (src[j] != '\0')
        {
                dest[i] = src[i]
                i++;
                j++;
        }
        dest[i] = '\0';
        return (dest);
}
