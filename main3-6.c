#include <stdio.h>

int main(void)
{   int x,y,z,min;
    printf("����A:");scanf("%d",&x);
    printf("����B:");scanf("%d",&y);
    printf("����C:");scanf("%d",&z);
    min=x;
    if(y<min) min=y;
    if(z<min) min=z;
    printf("��Сֵ��%d��\n",min);
    return 0;
}
