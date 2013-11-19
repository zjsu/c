#include<stdio.h>
int main()
{
    long n, i;
    double sum;
    scanf("%d", &n);
    i = 1;
    sum = 0;
    while (sum <= n) {
        sum = sum + (1.0 / i);
        i++;
    }
    printf("s=%.4f,n=%d\n", sum, i - 1);
    return 0;
}
