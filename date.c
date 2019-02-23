/*
    date and files related stuff 
 */

#include <stdio.h>

int main()
{
  printf("Today's Date :%s", __DATE__);
  printf("\n Time: %s", __TIME__);
  printf("\n File: %s",__FILE__);
  
}