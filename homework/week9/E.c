#include<stdio.h>
int main()
{
    int i, j, k, n, m, sum, ii;
    scanf("%d%d", &n, &m);
    for (i = n; i <= m; i++) {
        k = 0;
        sum = i;
        while (k <= 101) {
            j = 0;
            ii = sum;
            k++;
            if (k == 102) {
                printf("%d(?):\n", i);
                break;
            }
            while (ii) {
                j = j * 10 + ii % 10;
                ii = ii / 10;
            }
            if (j == sum) {
                printf("%d(%d):%d\n", i, k - 1, j);
                break;
            }
            sum = j + sum;
        }
    }
    return 0;
}
