#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z,min;
    printf("����A:");scanf("%d",&x);
    printf("����B:");scanf("%d",&y);
    printf("����C:");scanf("%d",&z);
    min=x?y:z;
    printf("��С������%d��",min);
    return 0;
}
