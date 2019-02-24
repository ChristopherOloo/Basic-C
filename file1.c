/*
  program for writing new data into data.dat fileS
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


int main(){
  FILE *fle1=NULL;

  fle1 = fopen("data.dat", "w+");

  if(fle1==NULL){
    puts("Error in opening file");
  }

  else{
    struct Friends list = {0,"","","",0};

    //trying to allow looping by age
    printf("The the unique no. of the friend: ");
    scanf("%d",&list.unique_no);

    while(list.unique_no !=0){
      printf("%s", "\nFirst name, Last name , Hobby,  Age  :");

      fscanf(stdin, "%14s%5s%6s%d",list.firstname,list.lastname,list.Hobby,&list.age);
      fseek(fle1,(list.unique_no - 1)*sizeof(struct Friends), SEEK_SET);
      fwrite(&list,sizeof(struct Friends),1,fle1);

      printf("%s", "\nEnter Friends Unique number: ");
      scanf("%d", &list.unique_no);

    }
    fclose(fle1);
      
    }
 

  }



