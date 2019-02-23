#include <stdio.h>
/* A program to give n output of;
  Smile!Smile!Smile!
  Smile!Smile!
  Smile!
*/
int main(int argc, char const *argv[])
{
  int i=3;
  while(i>0){
    
    int j=i;
    while(j>0){
      printf("Smile!");
      --j;
    }
    puts("");
    --i;
  }
  return 0;
}
