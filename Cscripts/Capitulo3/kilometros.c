#include <stdio.h>

int main(){
  float kilometros;
  float litros;
  float Rendimiento;

  printf("ingresa el consumo de gasolina en litros\n");
  scanf("%f",&litros);
  printf("ingresa los kilometros recorridos");
  scanf("%f",&kilometros);

  Rendimiento = kilometros / litros;
  printf("el rendimiento del auto es de %f, por litro\n",Rendimiento);


  return 0;


}
