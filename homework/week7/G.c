#include <stdio.h>

int main()
{
    int n, a, b, c, sum;

    scanf("%d", &n);

    a = n % 10;
    b = (n / 10) % 10;
    c = (n / 100) % 10;

    sum = 0;

    if (a % 2 == 0)
        sum += a;
    if (b % 2 == 0)
        sum += b;
    if (c % 2 == 0)
        sum += c;

    printf("%d\n", sum);

    return 0;
}
