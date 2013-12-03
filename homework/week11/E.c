#include<stdio.h>
int a[] = {11, 101, 131, 151, 181, 191, 313, 353, 373, 383, 727, 757, 787, 797, 919, 929};
int main()
{
    int n, m, i, j;
    scanf("%d%d", &n, &m);
    j = 0;
    for (i = 0; i < 16; i++)
        if (a[i] >= n && a[i] <= m) {
            j++;
            printf("%6d", a[i]);
            if (j % 5 == 0) printf("\n");
        }
    printf("\n");
    return 0;
}
