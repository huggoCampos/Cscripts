#include <stdio.h>

int main(){
  int i;
  int numero;
  int mayor;

  mayor = 0;
  for(i =1; i <= 10; i++){
    printf(" %d ingrese un numero\n", i);
    scanf("%d",&numero);
    printf("\n");
    if(numero > mayor){
      mayor = numero;
    }
  }
  printf("%d\n",mayor);
  return 0;
}
