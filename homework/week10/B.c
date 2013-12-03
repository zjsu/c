#include<stdio.h>
#include<math.h>
int main()
{
    int a, b = 0, c, i, sum = 0, n[200], m, j, k, l;
    for(i = 2; i <= 200; i++) {
        m = 0;
        for(a = 2; a <= sqrt(i); a++) {
            if(i % a != 0)
                continue;
            else {
                m = 1;
                break;
            }
        }
        if(m == 0) {
            if(i % 2 != 0) {
                b++;
                n[b] = i;
            }
        }
    }
    while(scanf("%d", &c), c != 0) {
        for(j = 1; j <= b; j++) {
            if(n[j] * 3 == c) {
                sum++;
                break;
            }
        }
        for(j = 1; j <= b; j++) {
            for(k = j; k <= b; k++) {
                for(l = k; l <= b; l++) {
                    if(c == n[j] + n[k] + n[l]) {
                        if(n[j] != n[l])
                            sum++;
                    }
                }
            }
        }
        if(sum != 0)
            printf("%d\n", sum);
        else
            printf("Error\n");
        sum = 0;
    }
    return 0;
}
