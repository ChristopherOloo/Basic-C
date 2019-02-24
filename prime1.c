/*
    A program tha gives a series of prime numbers upom the range entered.
*/

#include <stdio.h>

int main()
{
  int num ,i,j;
  printf("Enter a number : ");
  scanf("%d",&num);

  for(i=2; i<num;i++)
  { 
    
    for(j=2;j<num;j++)
    {
      if((i%j)==0)
        break;
    }

     if(j>(i/j))
    {
      printf("\n%d is prime",i);
    }
     
  }
}