#include <stdio.h>
#include <stdlib.h>

int main()
{
    int no,i;
    printf("������һ������:");
    scanf("%d",&no);
    i=2;
    while(i<=no){
        printf("%d ",i);
        i=i+2;
    }
    printf("\n");
    return 0;
}
