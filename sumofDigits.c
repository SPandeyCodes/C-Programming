#include<stdio.h>

int main()

{
    int integer;
    int sum=0;
    int split;
    printf("The integer: ");
    scanf("%i",&integer);
    
    while(integer!=0)
    {
    split=integer%10;
    sum+=split;
    integer=integer/10;
    }
    
    printf("The sum is %d",sum);
        
    
}