#include <stdio.h>

int main()
{
    char c;
    
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z')
        printf("输入的是一个大写字母\n");
    else
        printf("输入的不是一个大写字母\n");

    return 0;
}
