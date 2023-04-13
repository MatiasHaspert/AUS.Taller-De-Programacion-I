/**/

#include <stdio.h>

int main()
{
    for(int i = 'a'; i <= 'z'; i++ )
    {
        printf("%d)  %c\n", i-96, i);
    }

    return 0;
}