#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int arreglo [88];
int i, n;
int posicion=-1;
  
int main ()

{
  for (i=0; i<88; i++){
      
      arreglo[i] = rand() % (100 + 1);
      
  }
  
  for (i=0; i<88; i++){
      
     printf("%d \n", arreglo[i]);
  }
  printf("Por favor digite el número que quiere encontrar");
  
  scanf("%d",&n);
  
  for (i=0; i<88; i++){
      
      if (arreglo[i]==n){
          
          posicion=i;
          
          printf("Su número se encuentra en la posición %d", posicion);
      }
  }

  
  return 0;
  
  
    
}
