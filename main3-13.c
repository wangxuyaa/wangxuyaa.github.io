#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("�������·ݣ�");
    scanf("%d",&month);
    switch(month)
    {
        case 3:
        case 4:printf("%d���Ǵ�����\n",month);
        case 5:break;
        case 6:
        case 7:printf("%d�����ļ���\n",month);
        case 8:break;
        case 9:
        case 10:printf("%d�����＾��\n",month);
        case 11:break;
        case 1:
        case 2:printf("%d���Ƕ�����\n",month);
        case 12:break;
        default :printf("%d�²����ڡ�\n",month);
    }
    return 0;
}
