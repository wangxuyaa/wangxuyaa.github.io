#include <stdio.h>
int main (void)
{
    int a;
    int b;
    int sum=0;


        printf("请输入两个整数。\n");
        printf("整数a：");scanf("%d",&a);
        printf("整数b: ");scanf("%d",&b);
    int t=(a>b) ? b:a;
    do
    {
        sum=sum+t;
        t=t+1;
    }  while (t>=((a>b) ? b:a)&&t<=((a>b) ? a:b));
        printf("大于等于%d小于等于%d的所有整数的和是%d",(a>b) ? b:a,(a>b) ? a:b,sum);
    return 0;
}

