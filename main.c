#include <stdio.h>
int main(void)
{
    int number;

    scanf("%d", &number);

    // 0以上9以下、または12以上14以下ならOKとする
    if ((number >= 0 && number < 10) ||
        (number >= 12 && number < 15))
    {
        printf("OK")
    }
    // それ以外の整数はNGとする
    else
    {
        printf("NG");
    }

    return 0;
}