#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no;
    printf("������һ��������");
    scanf("%d",&no);
    switch(no%2)
    {
        case 0:puts("��������ż����"); break;
        case 1:puts("��������������"); break;
    }
    return 0;
}
