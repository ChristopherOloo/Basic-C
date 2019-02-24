/*
  simple enum program for validating one's favourite day
*/

#include <stdio.h>

enum day
{
  Mon=1,Tue, Wed, Thur, Fri, Sat, Sun

};

int main(int argc, char const *argv[])
{
  const char *dayname[]= {"", "Mon", "Tue", "Wed", "Thur", "Fri", "Sat", "Sun"};
  int test;
  //char fals = 'y';
  printf("\n Enter the no. of your favourite day as it occurs in a week:");
  scanf("%d",&test);

  for(enum day dey=Mon; dey < Sun; dey++)
  {
   
  if(test==dey)
  {
    printf("\n Your Favourite Day is %s", dayname[dey]);
  }

    //fals = 'y';
  }

  // if(fals == 'n')
  // {
  //   printf("\n No such day");
  // }
  return 0;
}
