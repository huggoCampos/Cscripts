#include <stdio.h>

int main(){
  int i;

  printf("N\tN*10\tN*100\tN*1000\n");
  for(i =1; i<=10;i++){
    printf("%d\t%d\t%d\t%d\n",i,i*10,i*100,i*1000);
  }
  return 0;
}
