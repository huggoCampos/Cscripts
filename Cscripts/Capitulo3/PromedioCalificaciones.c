#include <stdio.h>

int main(){
  int contador; //numero de la calificacion
  int calificacion; // Valor de la calificacion
  int total; // suma de las calificaciones introduciadas
  int promedio; // promedio de las calificaciones


  total = 0; // inicializacion de la variable
  contador = 1; // inicializacion del contador

  while(contador <= 10){
    printf("introdusca la calificacion %d\n", contador); // indica la entrada de datos
    scanf("%d",&calificacion );
    total = total + calificacion;
    contador = contador +1;
  }

  promedio = total / 10;
  printf("el promedio del grupos es %d\n",promedio );
  return 0;
}
