
#include<stdio.h>
int main()
{
    int i, j, n, a[10][10], b[10], c[10], bo;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            if (j == 0)
                b[i] = a[i][j];
            else if (a[i][j] > b[i])
                b[i] = a[i][j];
            else if (a[i][j] == b[i])
                b[i] = -32000;
    }
    for (j = 0; j < n; j++) {
        for (i = 0; i < n; i++)
            if (i == 0)
                c[j] = a[i][j];
            else if (a[i][j] < c[j])
                c[j] = a[i][j];
            else if (a[i][j] == c[j])
                c[j] = -32000;
    }
    bo = 0;
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            if (a[i][j] == b[i] && a[i][j] == c[j]) {
                if (bo == 0) printf("%d %d\n", i, j);
                bo = 1;
            }
    if (bo == 0) printf("NO\n");
    return 0;
}

