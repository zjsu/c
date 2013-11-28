
#include<stdio.h>
#include<string.h>
char b[1000];
int n, i, j;

int main()
{
    while (gets(b)) {
        n = strlen(b);
        if (n % 2 == 0) {
            for (i = n / 2 - 1; i >= 0; i--)
                printf("%c", b[i]);
            for (i = n - 1; i >= n / 2; i--)
                printf("%c", b[i]);
            printf("\n");
        } else {
            for (i = (n - 1) / 2 - 1; i >= 0; i--)
                printf("%c", b[i]);
            printf("%c", b[(n - 1) / 2]);
            for (i = n - 1; i > (n - 1) / 2; i--)
                printf("%c", b[i]);
            printf("\n");
        }
    }
    return 0;
}

