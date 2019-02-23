/*
    program for comparing content of two files (data.dat and data1.dat)
*/

#include <stdio.h>

int main(){
  FILE *fle1 , *fle2;

  fle1 = fopen("data.dat", "rb");
  fle2 = fopen("data1.dat", "rb");

  if(fle1==NULL || fle2==NULL)
  {
    puts("Error in opening a file");
  
  }

  else
  {
    int a = getc(fle1);
    int b = getc(fle2);
    if (a==b)
     {
       puts("Similar files");
    }

    else
    {
      puts("different files");
    }
    
    int fcloseall();
  }
}