/*
  Basic Program Aplying Structures and String Copy with a bit of functions.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void view(void);
struct Book
{
  char Title[20];
  char Author[20];
  char Publisher[20];
  int  Year_published;
  int Edition;
};

void printBook(struct Book book);

int main()
{
  // Book 1 information
  struct Book book1;
  strcpy(book1.Author,"Chris Gud Ghuru");
  book1.Edition = 5;
  strcpy(book1.Publisher, "Ghurus publishers");
  strcpy(book1.Title, "Modern AI");
  book1.Year_published = 2024;

  //Book2 Info
  struct Book book2;
  strcpy(book2.Title, "Secure Systems");
  strcpy(book2.Author, "Gud Ghuru");
  book2.Edition = 8;
  book2.Year_published = 2025;
  strcpy(book2.Publisher, "Ghurus Publishers");

  printBook(book1);
  puts("");
  printBook(book2);
  puts("");

  //dynamic manual Entering of Data into files 
  FILE *Book3=NULL;
  //struct Book book3;

  Book3 = fopen("book3.dat", "ab+");
  if(Book3==NULL)
  {
    puts("Fail to open the file!");
  }

  else
  { 
    int stop;
    printf("\nEnter 0 to stop or 1 to continue or 2 to view: ");
    scanf("%d", &stop);

    while(stop ==1)
    { 
      struct Book book3 = {"","","",0,0};
      printf("\nTitle : ");
      scanf("%s",book3.Title);
      printf("\nAuthor : ");
      scanf("%s", book3.Author);
      printf("\nPublishers: ");
      scanf("%s",book3.Publisher);
      printf("\nEdition : ");
      scanf("%d", &book3.Edition);
      printf("\nYear Published : ");
      scanf("%d", &book3.Year_published);
      fwrite(&book3, sizeof(struct Book),1,Book3);

      printf("\nPress  1 to continue or 0 to stop 2 to view: ");
      scanf("%d", &stop);

    }

    fclose(Book3);

    if(stop==2)
    {
      view();
      
    }

    else
    {
      exit(0);
    }
  }
 
}

void printBook(struct Book book)
{
  printf("\nTitle : %s", book.Title);
  printf("\nAuthor : %s", book.Author);
  printf("\nPublishers: %s", book.Publisher);
  printf("\nEdition : %d", book.Edition);
  printf("\nYear Published : %d", book.Year_published);
}

void view(void)
{
  FILE *Book3=NULL;

  Book3 = fopen("book3.dat", "rb");

  if(Book3==NULL)
  {
    puts("Error in opening files");
  }

  else
  { 
    printf("\n\t%s\t\t%s\t\t%s\t%s\t\t%s", "TITLE", "AUTHOUR", "PUBLISHER", "EDITION", "YEAR");

    while(!feof(Book3))
    {

    struct Book book3;
    int result = fread(&book3, sizeof(struct Book),1,Book3);
    if(result != 0) 
    {
      
      printf("\n\t%s\t\t%s\t\t%s\t\t%d\t\t%d\n", book3.Title, book3.Author, book3.Publisher, book3.Edition, book3.Year_published);
    }
    
    }

    fclose(Book3);
  }
  
}