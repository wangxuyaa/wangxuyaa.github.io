#include <stdio.h>

int main(void)
{
    int x;
    printf("������һ��������");
    scanf("%d",&x);
    if(x<0)
        printf("����ֵ��%d��\n",-x);
    else
        printf("����ֵ��%d��\n",x);
    return 0;
}
