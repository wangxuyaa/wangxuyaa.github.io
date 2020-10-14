#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,min;
    printf("整数A:");scanf("%d",&x);
    printf("整数B:");scanf("%d",&y);
    printf("整数C:");scanf("%d",&z);
    min=x?y:z;
    printf("最小的数是%d。",min);
    return 0;
}
