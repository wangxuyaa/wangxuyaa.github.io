#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,x;
    printf("ÕûÊıÖµ£º");
    scanf("%d",&x);
    for(i=1;i<=15;i++)
        if(i%2)
        printf("%d ",i);
    putchar('\n');
    return 0;
}
