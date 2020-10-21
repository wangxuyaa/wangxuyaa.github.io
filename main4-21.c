#include <stdio.h>
int main()
{
    int i,j,len;
    printf("生成一个正方形\n");
    printf("正方形有几层:");
    scanf("%d",&len);
    for(i=1;i<=len;i++)
    {
        for(j=1;j<=len;j++)
            putchar('*');
            putchar('\n');
    }
    return 0;
}
