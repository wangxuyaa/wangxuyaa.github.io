#include <stdio.h>
int main (void)
{
    int a;
    int b;
    int sum=0;


        printf("����������������\n");
        printf("����a��");scanf("%d",&a);
        printf("����b: ");scanf("%d",&b);
    int t=(a>b) ? b:a;
    do
    {
        sum=sum+t;
        t=t+1;
    }  while (t>=((a>b) ? b:a)&&t<=((a>b) ? a:b));
        printf("���ڵ���%dС�ڵ���%d�����������ĺ���%d",(a>b) ? b:a,(a>b) ? a:b,sum);
    return 0;
}

