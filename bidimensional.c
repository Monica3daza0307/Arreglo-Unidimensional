#include <stdio.h>
#include <stdlib.h>


int matriz [9][9];
int i, j, usuario;
  
int main (){
    for(i=0; i<9; i++){
        for (j=0; j<9; j++){
            matriz[i][j]= rand () % 100 + 1;
        }
        
    }
    for(i=0; i<9; i++){
        
        for (j=0; j<9; j++){
            printf("%d \t", matriz[i][j]);
        }
       printf("\n");
    }
    printf("Por favor digite el número que quiere encontrar: ");
    scanf("%d", & usuario);
    
    for(i=0; i<9; i++){
        for (j=0; j<9; j++){
            if (matriz[i][j] == usuario){
                printf("Su número esta en la ubicación [%d, %d]", i,j);
            }
        }
    }
        
     return 0;
    
}

  
 
  
  
    
