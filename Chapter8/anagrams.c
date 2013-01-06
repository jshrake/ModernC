#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main(void)
{
    while(true)
    {
        char ch;
        bool anagrams = true;
        int alpha_count[256] = {0};
        printf("Enter first word: ");
        while((ch = getchar()) != '\n')
        {
            ++alpha_count[(int)ch];
        }
        printf("Enter second word: ");
        while((ch = getchar()) != '\n')
        {
            --alpha_count[(int)ch];
        }
        for(int i = 0; i < 256; ++i)
        {
            if(alpha_count[i] != 0)
            {
                printf("The words are not anagrams.\n");
                anagrams = false;
                break;
            }
        }
        if (anagrams)
        {
            printf("The words are anagrams.\n");
        }
    }
    return 0;
}
