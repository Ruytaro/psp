#include <stdio.h>
int main(){

    int v, *p;
    p = &v;
    printf("%d, %p",*p,p);
    return 0;
}