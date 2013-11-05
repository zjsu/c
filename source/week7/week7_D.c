#include <stdio.h>

int main()
{
    float x, y;

    scanf("%f", &x);

    if (x < 0)
        y = 0;
    else if (x <= 15)
        y = 4.0 * x / 3.0;
    else
        y = 2.5 * x - 10.5;

    printf("%.2f\n", y);

    return 0;
}
