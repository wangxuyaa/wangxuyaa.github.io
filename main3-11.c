#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    puts("请输入两个整数。");
    printf("整数A：");scanf("%d",&x);
    printf("整数B；");scanf("%d",&y);
    z=(y>x)?y-x:x-y;
    if (z<=10)
        printf("它们的差小于等于10。");
    else
        printf("它们的差大于等于11。");
    return 0;
}
