#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *clear(char *hash)
{
    // for (int i = 0; i < strlen(hash); i++)
    // {
    //     hash[i] = 0;
    // }
    memset(hash, 0, 129);
    hash[128] = '\0';
    return hash;
}


int lengthOfLongestSubstring(char *s)
{
    int n = strlen(s);
    char *hash = (char *)malloc(sizeof(char) * 129);
    hash = clear(hash);
    int max = 0;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (hash[s[j]] == 0)
            {
                hash[s[j]]++;
                c++;
                printf("%d\n", c);
            }
            else
            {
                max = max > c ? max : c;
                c = 0;
                hash = clear(hash);
                break;
            }
        }
    }
    if (c > max)
    {
        max = c;
    }
    return max;
}

int main()
{
    char str[] = "a";
    char *p = str;
    printf("%d\n", lengthOfLongestSubstring(p));
}