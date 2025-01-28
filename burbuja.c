#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

void muestraVector(int *, int);
void ordenaVector(int *, int);


void main()
{
    int lista[] = {91,82,73,64,55,46,37,28,19,00};

    muestraVector(lista, 10);
    ordenaVector(lista, 10);
    muestraVector(lista, 10);
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