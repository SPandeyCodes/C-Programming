#include<stdio.h>

int main()
{
    int number;
    int sumEven=0;
    int sumOdd=0;
    int i;
    printf("Enter the limit");
    scanf("%d",&number);
    
    for(i=1;i<=number;i++)
    {
        if(i%2==0)
        sumEven+=i;
        
        else
        sumOdd+=i;
        
    }
    
    printf("\nThe sum of even numbers is %i",sumEven);
    printf("\nThe sum of odd numbers is %i",sumOdd);
    
    return 0;
    
    
    
}