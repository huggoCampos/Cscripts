#include <stdio.h>

int main(){
  int NumeroCuenta;
  float CargosMes;
  float adeudo;
  float limiteCredito;
  float nuevocredito;
  int bandera;

  printf("desea capturar datos?\n digite 1 si desea continuar\n2 para terminar el programa ");
  scanf("%d",&bandera);

  while(1==bandera){
    printf("ingrese el numero de cuenta\n");
    scanf("%d",&NumeroCuenta);

    printf("ingrese el limite de credito para esta cuenta\n");
    scanf("%f",&limiteCredito);

    printf("ingrese el saldo de la cuenta del mes anterior\n");
    scanf("%f",&adeudo);

    printf("ingrese el monto del credito de este mes\n");
    scanf("%f",&CargosMes );

    if(limiteCredito < adeudo + CargosMes){
      printf("se a exedido el limite de credito \n");
      adeudo = (adeudo + CargosMes)- limiteCredito;
      printf("hay un exedente de %f\n",adeudo );
    }
    else{
      nuevocredito = limiteCredito - (adeudo+CargosMes);
      printf("el cliente con el numero de cuenta %d aun cuenta con un saldo a favor de %f\n",NumeroCuenta, nuevocredito);
    }
    printf("desea hacer el calculo para otro cliente?\n");
    printf("digite 1 para si 2 para no\n");
    scanf("%d",&bandera );



  }
  return 0;
}
