#include <stdio.h>
#include <stdlib.h>

int main()
{
    int counter;
    double number,largest;
    printf("Enter number.1:");
    scanf("%lf",&number);
    while(number<0){
        printf("INVALID INPUT.ENTER POSITIVE NUMBER.\n");
        scanf("%lf",&number);
    }
    largest=number;
    counter=2;
    while(counter<=10)
    {
        printf("Enter number.%d:",counter);
        scanf("%lf",&number);
        if(number<0){
        printf("INVALID INPUT.ENTER POSITIVE NUMBER.\n");
        scanf("%lf",&number);
        }else if(number>largest){
        largest=number;
        }
        counter++;
    }
    printf("Largest number.=%.0lf",largest);

        return 0;
}
