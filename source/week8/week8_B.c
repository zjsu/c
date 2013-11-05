#include <stdio.h>

int main()
{
    int score, grade;

    scanf("请输入分数 %d", &score);

    if (score < 60)
        grade = 1;
    else if (score < 70)
        grade = 2;
    else if (score < 80)
        grade = 3;
    else if (score < 90)
        grade = 4;
    else
        grade = 5;

    printf("相对应的五分制 %d\n", grade);

    return 0;
}
