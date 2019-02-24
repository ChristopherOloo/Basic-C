/* 
  program for reading content of data.dat file
*/

#include <stdio.h>

struct Friends
  { 
    int unique_no;
    char firstname[15];
    char lastname[15];
    char Hobby[15];
    int age;
  };


int main()
{
  FILE *fle2=NULL;

  if((fle2=fopen("data.dat","rb"))==NULL)
  { 
    puts("Error in opening files");
  }

  else
  {
    printf("\t%s\t%s\t%s\t%s\t%4s\n", "Fav. No.", "First name", "Last name", "Hobby", "Age");

    while(!feof(fle2))
    {
      struct Friends list = {0,"","","",0};

      int results = fread(&list, sizeof(struct Friends),1,fle2);

      if(results !=0 && list.unique_no != 0)
      {
        printf("\t%d\t\t%s\t\t%s\t\t%s\t%d\n",list.unique_no, list.firstname, list.lastname, list.Hobby, list.age);
      }

    }
    
    fclose(fle2);
  }
  
  }