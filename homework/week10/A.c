#include <stdio.h>
int main()
{
    char c;
    int word, num;
    word = 0;
    num = 0;
    while((c = getchar()) != '\n') {
        if(c == ' ')
            word = 0;
        else if(word == 0) {
            word = 1;
            num++;
        }
    }
    printf("%d\n", num);
    return 0;
}
