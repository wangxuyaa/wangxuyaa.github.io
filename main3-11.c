#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    puts("����������������");
    printf("����A��");scanf("%d",&x);
    printf("����B��");scanf("%d",&y);
    z=(y>x)?y-x:x-y;
    if (z<=10)
        printf("���ǵĲ�С�ڵ���10��");
    else
        printf("���ǵĲ���ڵ���11��");
    return 0;
}
