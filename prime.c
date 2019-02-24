/*
  program that request  a user to enter a number and checks if it is prime
*/

#include <stdio.h>

int main()
{ 

  // i is the number you are entering
  int i, j=2;

  printf("\nEnter a number : ");
  scanf("%d",&i);

  
  for(j=2;j<i;j++)
  {
    if((i%j)==0)
    break;

  }

  if(i<2)
  {
    printf("\n 1 is not prime");
    
  }

   
  else if(j>(i/j))
  {

      printf("\n%d is prime",i);

  }

  
  else
  {
    printf("\n%d is not prime",i);
  }
  
}