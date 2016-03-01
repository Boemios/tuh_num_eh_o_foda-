#include <stdio.h>

int main () {
  int i,count = 0;
  for (i=0;i<100000000;i++){
    count+=1;
  }
  printf("%d\n",count);
}
