#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,sum;
    i=1,sum=0;
    printf("n��ֵ��");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
        sum=sum+i;
        printf("1��%d�ĺ�Ϊ%d��\n",num,sum);
    return 0;
}
