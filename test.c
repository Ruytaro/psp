#include <stdio.h>

void busca(int *v, int l, int* b, int*s){
    int big = 0, small = 100;
    for (int i = 0; i < l; i++){
        if (big < v[i]){
            big = v[i];
        }
        if (small > v[i]){
            small = v[i];
        }
    }
    *b=big;
    *s=small;
}

void busca2(int *v, int l, int *b, int*s){
    for (int i = 0; i < l; i++){
        if (*b < v[i]){
            *b = v[i];
        }
        if (*s > v[i]){
            *s = v[i];
        }
    }
}

int main() {
    int list[] = {7,9,3,11,8,2,6,14};
    int g=0, p=100;
    busca2(list,sizeof(list)/sizeof(list[0]),&g,&p);

    printf("grande %d, pequeño %d",g,p);
    return 0;
}

