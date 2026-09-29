#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("b: ");
    scanf("%d",&b);
    printf("c: ");
    scanf("%d",&c);
    a=b+c;
    if(a>b)
        {
        printf("a=%d\n",a);
        c=a-b;
        }
    else
        {
        printf("c=%d",c);
        }
    return 0;
}
