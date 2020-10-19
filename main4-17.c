#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,i;
    printf("n的值：");
    scanf("%d",&x);
    for(i=1;i<=x;i++)
        printf("%d的二次方是%d\n",i,i*i);
    return 0;
}
