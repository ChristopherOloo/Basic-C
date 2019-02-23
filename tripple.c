/*
     A program for printing 3 integers that adds up to 7
*/

#include <stdio.h>
#include <stddef.h>

int main(int argc, char const *argv[])
{

  int i,j,k;
  for(i=0;i<8;i++)
  {
    for(j=0;j<8;j++)
    {
      for(k=0;k<8;k++)
      {
        if((i+j+k)==7)
        {
          printf("%d\t%d\t%d\n",i,j,k);
        }
      }
    }
  }
  return 0;
}

   


