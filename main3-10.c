#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("请输入三个整数。\n");
    printf("整数A：");scanf("%d",&x);
    printf("整数B：");scanf("%d",&y);
    printf("整数C：");scanf("%d",&z);
    if (x==y&&y==z)
        puts("三个值都相等。");
    else if (x==y||y==z||x==z)
        puts("有两个值相等。");
    else
        puts("三个值各不相同。");
    return 0;
}
