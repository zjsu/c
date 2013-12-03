#include <stdio.h>

int main()
{
    int n;

    while (scanf("%d", &n) != EOF)
        printf("%d\n", n * n * n % 1000);

    return 0;
}
