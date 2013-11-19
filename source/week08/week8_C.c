#include <stdio.h>

int main()
{
    float x, y;

    scanf("%f", &x);

    if (x <= 1)
        y = x + 5;
    else if (x <= 10)
        y = 2 * x;
    else
        y = 3 / (x - 10);

    printf("%.3f\n", y);

    return 0;
}
