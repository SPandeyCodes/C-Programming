#include<stdio.h>

int main()
{
    
    int number;
    printf("Enter the number");
    scanf("%d",&number);
    
    if(number%2==0)
    printf("The number %i is even",number);
    else
    printf("The number %i is odd ",number);
    return 0;
    
    
}