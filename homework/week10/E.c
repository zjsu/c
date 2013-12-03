#include <stdio.h>
int main ()
{
    int n, i;
    float t = 1.0, sum = 0.0;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        t = t / i;
        sum += t;
    }
    printf("%.4f\n", sum);
    return 0;
}
