#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("��ʾ���ٸ�*��");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {printf("*");
    if (i%5==0)
        putchar('\n');}
    return 0;
}
