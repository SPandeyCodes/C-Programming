  #include<stdio.h>
  
  int main()
  {
      
      int number;
      printf("Enter the limit");
      scanf("%d",&number);
      int i;
      int count=0;
      
      for(i=1;i<=number;i++)
      {
          if(i%5==0)
          count++;
      }
      
      printf("The number of integers divisible by 5 is %i",count);
      return 0;
      
  }