#include <stdio.h>
#include <stdlib.h>

int id_estudiante;
int i;

struct notas{
    int id; 
    float nota1, nota2;
};

struct notas estudiantes [3]={ {1,5,4.2}, {2,4.5,4.3}, {3,1,5}};

int main (){
    
    printf("Por favor, digite su ID");
    scanf("%d", &id_estudiante);
    
    for (i=0; i<3; i++){
        
        if(estudiantes[i].id==id_estudiante){
            printf("Sus notas son: Nota 1=%.2f,Nota 2=%.2f", estudiantes[i].nota1,estudiantes[i].nota2);
        }
    }
    
    return 0;
    
}
        
     


  
 
  
  
    
