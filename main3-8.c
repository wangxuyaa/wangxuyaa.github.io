#include <stdio.h>

int main(void)
{
    int x,y;
    puts("����������������");
    printf("����1:");scanf("%d",&x);
    printf("����2:");scanf("%d",&y);

    if (x>y)
        printf("���ǵĲ���%d��",(x-y));
    else
        printf("���ǵĲ���%d��",(y-x));
    return 0;
}
