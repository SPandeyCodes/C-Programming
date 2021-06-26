#include<stdio.h>

int main()
{
    int decimal;
    int binary=0;
    int base=1;
    int remain;
    printf("Enter the decimal number :");
    scanf("%d",&decimal);
    
    int original_decimal;
    original_decimal=decimal;
    
    while(decimal>0)
    {
        remain=decimal%2;
        binary=binary+remain*base;
        decimal=decimal/2;
        base=base*10;
        
    }
    
    printf("The decimal id : %d\n",original_decimal);
    printf("The binary is : %d",binary);
    
    
    return 0;
    
    
    
}