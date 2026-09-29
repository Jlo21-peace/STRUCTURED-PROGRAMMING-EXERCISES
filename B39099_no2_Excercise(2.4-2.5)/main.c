#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0,y=0,z=0,product;
    printf("Enter x:");
    scanf("%d",&x);
    printf("Enter y:");
    scanf("%d",&y);
    printf("Enter z:");
    scanf("%d",&z);
    product=x*y*z;
    printf("The product is %d",product);
    return 0;
}
