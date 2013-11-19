#include<stdio.h>
int main()
{
    long a, b, c, m, n;
    while (scanf("%d%d", &a, &b) != EOF) {
        if (a < b) {
            c = a;
            a = b;
            b = c;
        }
        m = a;
        n = b;
        c = a % b;
        while (c) {
            a = b;
            b = c;
            c = a % b;
        }
        printf("%d %d\n", b, m * n / b);
    }
    return 0;
}
