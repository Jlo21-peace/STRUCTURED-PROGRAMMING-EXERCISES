#include <stdio.h>
#include <stdlib.h>

int main() {
    int i,j,isprime=1;
    printf("Enter number: ");
    scanf("%d",&i);
    if(i<=1){
        isprime=0;
    }else{
        for(j=2;j<=i/2;j++){
            if(i%j==0){
                isprime=0;
                break;
            }
        }
    }
        if(isprime==1){
            printf("%d is prime.\n",i);
        }else{
        printf("%d is not prime.\n",i);
            }

    return 0;
    }
