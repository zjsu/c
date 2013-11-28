
#include<stdio.h>
#include<string.h>
char b[1000];
int n, i, j;
void qsort(int l, int r)
{
    int i, j;
    char mid, temp;
    mid = b[(l + r) / 2];
    i = l;
    j = r;
    do {
        while (b[i] < mid) i++;
        while (b[j] > mid) j--;
        if (i <= j) {
            temp = b[i];
            b[i] = b[j];
            b[j] = temp;
            i++;
            j--;
        }
    } while (i < j);
    if (i < r) qsort(i, r);
    if (l < j) qsort(l, j);
}


int main()
{
    gets(b);
    n = strlen(b);
    if (n % 2 == 0) {
        qsort(0, n / 2 - 1);
        for (i = n / 2; i < n; i++)
            printf("%c", b[i]);
        for (i = 0; i < n / 2; i++)
            printf("%c", b[i]);
        printf("\n");
    } else {
        qsort(0, (n - 1) / 2);
        for (i = (n + 1) / 2; i < n; i++)
            printf("%c", b[i]);
        printf("%c", b[(n + 1) / 2 - 1]);
        for (i = 0; i < (n - 1) / 2; i++)
            printf("%c", b[i]);
        printf("\n");
    }
    return 0;
}

