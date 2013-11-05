#include <stdio.h>

int main()
{
    int a, b, result;
    char op;

    
    while(scanf("%d%c%d", &a, &op, &b) != EOF) {
        if (op == '+')
            result = a + b;
        else if (op == '-')
            result = a - b;
        else if (op == '*')
            result = a * b;
        else if (op == '/')
            result = a / b;

        printf("%d\n", result);
    }

    return 0;
}
