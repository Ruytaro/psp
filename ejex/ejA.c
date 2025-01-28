#include <stdio.h>
#include <stdlib.h>

int main(){
    int array[5]= {5,10,15,20};
    int* ptr = array;
    int sum = 0;
    for(int i =0;i<(sizeof(array)/sizeof(array[0]));i++){
        sum += *(ptr + i);
    }
    printf("la suma da %d y está en la posicion %p\n",sum,&sum);
    return 0;
}