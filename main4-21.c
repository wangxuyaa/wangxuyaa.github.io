#include <stdio.h>
int main()
{
    int i,j,len;
    printf("����һ��������\n");
    printf("�������м���:");
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        for(j=1;j<=len;j++)
            putchar('*');
            putchar('\n');
    }
    return 0;
}
