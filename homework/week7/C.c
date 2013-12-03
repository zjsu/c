#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    printf("%d %d %.2f\n", a + b + c, a * b * c, (a + b + c)/3.0);

    return 0;
}
