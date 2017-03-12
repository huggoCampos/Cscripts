#include <stdio.h>

int main(){
  float sueldofijo;
  float comisiones;
  float ventas;
  float sueldototal;
  int bandera;

  printf("desea hacer el calculo de salario\n");
  printf("introduzca 1 para si 0 para no\n");
  scanf("%d",&bandera);
  while(1 != bandera){
    if(0 == bandera){
      printf("programa terminado\n");
      return 0;
    }
    printf("ingrese un valor valido\n");
    printf("desea hacer el calculo de salario\n");
    printf("introduzca 1   para si 0 para no\n");
    scanf("%d",&bandera);

  }
  while (1 == bandera) {
    printf("introduca las venta totales del vendedor\n");
    scanf("%f",&ventas);
    comisiones = ventas *0.09;
    sueldototal = 200 + comisiones;
    printf("el sueldo total del vendedor es %.2f\n",sueldototal);
    printf("desea hacer otro calculo\n");
    printf("ingrese -1 para si 0si desea terminar\n");
    scanf("%d",&bandera );

  }
  return 0;
}
