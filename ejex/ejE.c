#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int cuentaVocales(char*,int);

int main()
{
    char cadena[] = "Hola mundo, como están ustedes";
    int suma = cuentaVocales(cadena,sizeof(cadena)/sizeof(cadena[0]));

    printf("La cadena \"%s\" tiene %d vocales\n",cadena,suma);
    return 0;
}

int cuentaVocales(char* cadena,int len){
    int sum=0;
    for(int i =0; i < len;i++){
        switch (cadena[i])
        {
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            sum ++;
            break;
        }
    }
    return sum;
}