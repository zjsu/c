#include <stdio.h>

int main()
{
    int n, t, i, sum;

    scanf("%d",&n);

    sum = 0;

    for (i = 1; i <= n; i++) {
        scanf("%d", &t);

        if (t % 2 == 0)
            sum += t;
    }

    printf("%d\n", sum);

    return 0;
}
