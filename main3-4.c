#include <stdio.h>

int main()
{
    int x,y;
    puts("����������������");
    printf("����A��");scanf("%d",&x);
    printf("����B��");scanf("%d",&y);
    if(x==y)
        puts("A��B��ȡ�");
    else if(x>y)
        puts("A����B��");
    else
        puts("AС��B��");
    return 0;
}
