#include<stdio.h>

int main()
{
    int binary;
    int decimal=0;
    int base=1;
    int remain;
    printf("Enter the Binary number :");
    scanf("%d",&binary);
    
    int original_binary;
    original_binary=binary;
    
    while(binary>0)
    {
        remain=binary%10;
        decimal=decimal+remain*base;
        binary=binary/10;
        base=base*2;
        
    }
    
    printf("The binary id : %d\n",original_binary);
    printf("The decimal is : %d",decimal);
    
    
    return 0;
    
    
    
}