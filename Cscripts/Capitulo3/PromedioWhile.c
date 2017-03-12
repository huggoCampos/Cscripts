#include <stdio.h>

int main(){
  int contador;
  int calificacion;
  int total;

  float promedio;

  total =0;
  contador =0;
  printf("introdusca -1 para terminar\n");
  scanf("%d",&calificacion );

  while(calificacion != -1){
    contador = contador +1;
    printf("introdusca -1 para terminar\n");
    scanf("%d",&calificacion);


  }
  if(contador != 0){
    promedio = (float)total/contador;
    printf("el promedio del grupo es %2f \n",promedio );
  }

  else{
    printf("no se introgeron calificaciones\n");
  }
  return 0;
}
