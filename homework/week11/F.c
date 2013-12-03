#include<stdio.h>
#include<string.h>
int m, n, i, j, k;
char s[100][100], e[100][100];
int main()
{
    while (scanf("%d%d", &n, &m) != EOF) {
        for (k = 1; k <= n; k++)
            scanf("%s", s[k]);
        for (i = 1; i <= m; i++)
            scanf("%s", e[i]);
        for (i = 1; i <= n; i++)
            for (j = 1; j <= m; j++)
                if (strcmp(s[i], e[j]) == 0) {
                    printf("Yes\n");
                    break;
                } else if(j == m)
                    printf("No\n");
        if (m == 0)
            for (i = 1; i <= n; i++)
                printf("No\n");
    }

    return 0;
}
