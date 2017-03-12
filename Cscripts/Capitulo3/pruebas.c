#include <stdio.h>

int main(){
  int x,y,z;

  x = 10;
  y = 15;
  z = x +y;
  x++;

  printf("%d\n",x);
  printf("%d\n",z);
  z *= 2;
  printf("%d\n",z);
  return 0;
}
