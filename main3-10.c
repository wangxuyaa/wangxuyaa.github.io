#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y,z;
    printf("����������������\n");
    printf("����A��");scanf("%d",&x);
    printf("����B��");scanf("%d",&y);
    printf("����C��");scanf("%d",&z);
    if (x==y&&y==z)
        puts("����ֵ����ȡ�");
    else if (x==y||y==z||x==z)
        puts("������ֵ��ȡ�");
    else
        puts("����ֵ������ͬ��");
    return 0;
}
