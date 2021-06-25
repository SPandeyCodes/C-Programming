#include<stdio.h>

int main()
{
    int M;
    int N;
    int temp=0;
    
    printf("Enter the number M");
    scanf("%d",&M);
    printf("\nEnter the number N");
    scanf("%d",&N);
    
    printf("\nBefore swapping M=%i and N=%i",M,N);
    
    temp=M;
    M=N;
    N=temp;
    printf("\nAfter swapping M=%i and N=%i",M,N);
    
    return 0;
    
    
    
}