#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,x,y;
    x=0;
    do{
        printf("������һ����������");
        scanf("%d",&no);
    }while(no<=0);
    y=no;
    while(y>0)
    {
        y/=10;x=x+1;
    }printf("%d��λ����%d��\n",no,x);
    return 0;
}
