#include <stdio.h>

int main(){
  int NumeroCuenta;
  int saldo;
  int Transacciones;
  int limiteCredito;


  printf("ingresa el numero de cuenta\n");
  scanf("%d",&NumeroCuenta);
  printf("deuda actua? \n");
  scanf("%d", &saldo);
  printf("ingrese el numero de transacciones echas este mes\n");
  scanf("%d",&Transacciones);
  printf("ingrese el limite de credito\n");
  scanf("%d",&limiteCredito);


  if(saldo + Transacciones < limiteCredito){
    printf("la transaccion puede ser realizada\n");
  }
  else{
    printf("esta transaccion no puede\n ser efectuada ya que su limite de credito es insuficiente\n");
  }
}
