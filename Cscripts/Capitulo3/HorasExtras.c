#include <stdio.h>

int main(){

  float horasTrabajadas;
  float salario;
  float horasNormales;
  float horasExtras;
  float total;
  int bandera;
  int probe;


  printf("desea realizar el calculo de salario\n");
  printf("digite 1 para comenzar \n");
  printf("o cualquier otro digito para teminar\n");
  scanf("%d",&bandera );

  while(1 == bandera){
    printf("ingrese el salario del empleado\n");
    scanf("%f",&salario);
    printf("ingrese el numero de horas trabajadas\n");
    scanf("%f",&horasTrabajadas);

    if(horasTrabajadas > 40){
      horasExtras = horasTrabajadas - 40;
      horasExtras = horasExtras * 1.5;
      horasExtras = horasExtras * salario;
      horasNormales = 40;
      horasNormales = 40 * salario;
      total = horasNormales + horasExtras;
      printf("el salario total del empleado es de  %.2f\n",total);
        }
    else{
      horasNormales = horasTrabajadas * salario;
      printf("el salario total del empleado es de %f\n",horasNormales);
    }
    printf("desea realizar el calculo de salario\n");
    printf("digite 1 para comenzar \n");
    printf("o cualquier otro digito para teminar\n");
    scanf("%d",&bandera );

  }
  return 0;
}
