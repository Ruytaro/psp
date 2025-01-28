#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void muestraVector(int *, int);
void ordenaVector(int *, int);


void main()
{
    int lista[] = {91,82,57,86,28,120};
    int len = sizeof(lista)/sizeof(lista[0]);
    
    muestraVector(lista, len);
    ordenaVector(lista, len);
    muestraVector(lista, len);
}

void muestraVector(int *vector, int size)
{
    printf("[ %d", *vector);
    for (int i = 1; i < size; i++)
    {
        printf(", %d", vector[i]);
    }
    printf(" ]\n");
}

void ordenaVector(int *vector, int size){
    bool sorted;
    do {
        sorted=true;
        for (int i = 1; i < size; i++){
            if (vector[i]<vector[i-1]){
                sorted=false;
                int t = vector[i];
                vector[i]=vector[i-1];
                vector[i-1]=t;
            }
        }
    } while (!sorted);
}