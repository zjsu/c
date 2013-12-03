#include<stdio.h>
int main()
{
    int a, b, c;
    scanf("%d,%d,%d", &a, &b, &c);
    int i = 0, j, k;
    for(i = b / a; i <= ((3 * b) / a); i++) {
        for(j = i + 1; j <= c; j++) {
            k = 0;
            if(a * i * j - b * (i + j) == 0)
                continue;
            if((i * j * b) % (a * i * j - b * (i + j)) == 0)
                k = (i * j * b) / (a * i * j - b * (i + j));
            if(k > j && k <= c)
                printf("%d/%d=1/%d+1/%d+1/%d\n", a, b, i, j, k);
        }
    }
    return 0;
}

