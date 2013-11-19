#include<stdio.h>
int main()
{
    long n = 0, m = 0, i, k;
    double sum = 0;
    scanf("%d", &k);
    i = 0;
    while (sum <= k + 1) {
        i++;
        sum = sum + 1.0 / i;
        if (n == 0 && sum > k) n = i;
    }
    m = i - 1;
    printf("%d<=m<=%d\n", n, m);
    return 0;
}
