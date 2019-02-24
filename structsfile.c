#include <stdio.h>
//#include "structs.c"


void view(void)
{
  FILE *Book3=NULL;

  Book3 = fopen("book3.dat", "r");

  if(Book3==NULL)
  {
    puts("Error in opening files");
  }

  else
  { 
    printf("\n\t%s\t\t%s\t\t%s\t\t%s\t%s", "TITLE", "AUTHOUR", "PUBLISHER", "EDITION", "YEAR");

    while(!feof(Book3))
    {

    struct Book book3;
    int result = fread(&book3, sizeof(struct Book),1,Book3);
    if(result != 0) 
    {
      struct Book book3;
      printf("\n\t%s\t\t%s\t\t%s\t\t%d\t%d\n", book3.Title, book3.Author, book3.Publisher, book3.Edition, book3.Year_published);
    }
    
    }

    fclose(Book3);
  }
  
}