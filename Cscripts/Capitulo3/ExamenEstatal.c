#include <stdio.h>

int main(){

  int TotalAlumnos;
  int resultado;
  int aprobados;
  int reprobados;
  int i;
  float totalAprobados;

  printf("introduce la cantidad de alumnos\n");
  scanf("%d",&TotalAlumnos);
  aprobados = 0;
  reprobados = 0;
  for(i=1;i<=TotalAlumnos;i++){
    printf("ingrese la calificacion del alumno %d\n",i);
    scanf("%d",&resultado );
    if(1 == resultado){
      aprobados = aprobados +1;
    }
    else if(2 == resultado){
      reprobados == reprobados +1;
    }
    else{
      printf("ingrese un valor valido\n");
      i = i-1;
    }
  }
  totalAprobados = (float)aprobados*100;
  totalAprobados = totalAprobados/(float)TotalAlumnos;
  if(totalAprobados >= 80){
    printf("el numero de alumnos aprobados es %d\n",aprobados );
    printf("el porcentaje de alumnos aprobados es %.2f porciento\n",totalAprobados );
    printf("Sellego a la meta\n");
  }
  else{
    printf("los alumnos aprobados no fuero suficientes para considerarlo un exito\n");
  }
  return 0;
}
