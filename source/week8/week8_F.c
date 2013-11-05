#include <stdio.h>

int main()
{
    int m, t, res;

    scanf("%d", &m);

    /* 判断m */
    res = 0;
    t = m;
    do {
        res = res * 10 + t % 10;
        t /= 10;
    } while (t);

    if (res != m)
        printf("%d不是三重回文数\n", m);

    /* 判断m^2 */
    res = 0;
    t = m * m;
    do {
        res = res * 10 + t % 10;
        t /= 10;
    } while (t);

    if (res != m * m)
        printf("%d不是三重回文数\n", m);
    
    /* 判断m^3 */
    res = 0;
    t = m * m * m;
    do {
        res = res * 10 + t % 10;
        t /= 10;
    } while (t);

    if (res != m * m * m)
        printf("%d不是三重回文数\n", m);
    else
        printf("%d是三重回文数\n", m);

    return 0;
}
