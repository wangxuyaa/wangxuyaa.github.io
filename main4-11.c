#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,x,y;
    x=0;
    do{
        printf("请输入一个正整数：");
        scanf("%d",&no);
    }while(no<=0);
    y=no;
    while(y>0)
    {
        y/=10;x=x+1;
    }printf("%d的位数是%d。\n",no,x);
    return 0;
}
