#include <stdio.h>

int main(void)
{
    int x,y;
    puts("请输入两个整数。");
    printf("整数1:");scanf("%d",&x);
    printf("整数2:");scanf("%d",&y);

    if (x>y)
        printf("它们的差是%d。",(x-y));
    else
        printf("它们的差是%d。",(y-x));
    return 0;
}
