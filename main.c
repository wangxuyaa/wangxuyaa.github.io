#include <stdio.h>

int main(void)
{
    int no;
    printf("������һ��������");
    scanf("%d",&no);
    if (no==0)
        puts("������Ϊ0");
    else if(no>0)
        puts("������Ϊ����");
    else if(no<0)
        puts("����");
    return 0;
}
