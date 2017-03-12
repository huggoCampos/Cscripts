#include <stdio.h>

int main(){
  int i;
  int numero;
  int mayor;
  int temp;
  int segundo;

  temp =0;

  for (i = 1; i <=10; i++) {
    printf("ingrese un numero\n");
    scanf("%d",&numero );

    if(numero > temp){
      segundo = temp;
      temp = numero;
    }
  }
  printf("%d\n%d\n",temp,segundo);
  return 0;
}
