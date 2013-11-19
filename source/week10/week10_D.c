#include<stdio.h>
int main()
{
    int n, i;
    float x, a, sum;
    scanf("%f %d", &x, &n);
    a = x;
    sum = x;
    for (i = 1; i < n; i++) {
        a = -1.0 * a * x / (i + 1);
        sum = sum + a;
    }
    printf("%.4f", sum);
    return 0;
}
