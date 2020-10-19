#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x,n;
    i=1;
    printf("请输入一个整数：");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {x=i%10;
        printf("%d",x);}
        putchar('\n');
    return 0;
}
