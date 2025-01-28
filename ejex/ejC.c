#include <stdio.h>
#include <stdlib.h>

void intercambiar(int**);

int main(){
    int *ermitente = (int*) malloc(sizeof(int));
    *ermitente=42;
    printf("valor almacenado %d, está en la posicion %p\n",*ermitente,ermitente);
    intercambiar(&ermitente);
    printf("valor almacenado %d, está en la posicion %p\n",*ermitente,ermitente);
    return 0;
}

void intercambiar(int** punt1){
    *punt1 = (int*)malloc(sizeof(int));
    **punt1=30;
}