#include<stdio.h>

int main()

{
    int number;
    printf("The number is ??");
    scanf("%i",&number);
    
    if(number<0)
    printf("The number %i is Negative",number);
    
    else if(number>0)
    printf("The number %i is positive",number);
    
    else
    printf("The number is Zero");
    
    return 0;
    
    
    
}