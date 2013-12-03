#include <stdio.h>
#include<string.h>
int main()
{
    char hhh[256], c;
    int sum, i;
    gets(hhh);
    while (hhh[0] != '#') {
        sum = 0;
        for(i = 0; (c = hhh[i]); i++) {
            if(c == ' ')
                continue;
            sum = sum + (i + 1) * (hhh[i] - 64);

        }
        printf("%d\n", sum);
        gets(hhh);
    }
    return 0;
}
