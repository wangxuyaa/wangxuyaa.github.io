#include <stdio.h>
#include <stdlib.h>

int main()
{
    int month;
    printf("请输入月份：");
    scanf("%d",&month);
    switch(month)
    {
        case 3:
        case 4:printf("%d月是春季。\n",month);
        case 5:break;
        case 6:
        case 7:printf("%d月是夏季。\n",month);
        case 8:break;
        case 9:
        case 10:printf("%d月是秋季。\n",month);
        case 11:break;
        case 1:
        case 2:printf("%d月是冬季。\n",month);
        case 12:break;
        default :printf("%d月不存在。\n",month);
    }
    return 0;
}
