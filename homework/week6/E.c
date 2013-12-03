#include <stdio.h>

int main()
{
    int n, sum, i, t;

    while (scanf("%d", &n), n != 0) {
        sum = 0;
        
        for (i = 1; i <= n; i++) {
            scanf("%d", &t);
            sum += t;
        }

        printf("%d\n", sum);
    }

    return 0;
}
