#include <stdio.h>

int main()
{
    float x, y, result;
    char op;

    while (scanf("%f%c%f", &x, &op, &y) != EOF) {
        switch(op) {
        case '+':
            printf("%.2f\n", x + y);
            break;
        case '-':
            printf("%.2f\n", x - y);
            break;
        case '*': 
            printf("%.2f\n", x * y);
            break;
        case '/':
            printf("%.2f\n", x / y);
            break;
        default:
            printf("Unknown operator!\n");
        }
    }

    return 0;
}
