#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum;
    i=1,sum=0;
    printf("n的值：");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum=sum+i;
        printf("1到%d的和为%d。\n",num,sum);
    return 0;
}
