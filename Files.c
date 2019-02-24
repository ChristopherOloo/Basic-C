/*
    program for comparing content of two files 
*/

#include <stdio.h>

int main(int argc, char const *argv[] ){
  FILE *fle1=NULL , *fle2=NULL;

  fle1 = fopen(argv[1] ,"rb");
  fle2 = fopen(argv[2], "rb");

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
    
    fcloseall();
  }
}