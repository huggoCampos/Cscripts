#include <stdio.h>

int main(){

  float interes;
  float prestamo;
  float tasa;
  float dias;
  float total;
  int bandera;

  printf("desea realizar el calculo del prestamo\n");
  printf("ingrese 1 para si presione cualquier numero diferente a 1 para terminar\n");
  scanf("%d",&bandera);
  while(1 == bandera){
    printf("ingrese el monto del prestamo\n");
    scanf("%f",&prestamo);
    printf("ingrese la tasa de interes\n");
    scanf("%f",&tasa );
    printf("ingrese los dias de plazo\n");
    scanf("%F",&dias);
    interes = prestamo * tasa* dias / 365;
    printf("el interes total a pagar es de %.2f\n",interes);


    printf("desea realizar otro calculo\n");
    printf("ingrese 1 para si presione cualquier numero diferente a 1 para terminar\n");
    scanf("%d",&bandera);


  }

  return 0;

}
