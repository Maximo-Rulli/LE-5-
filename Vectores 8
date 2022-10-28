#include <stdio.h>

void buscar_letra(int longitud);
int main(void) {
    char seguir = 1;
    unsigned int longitud;
    while(seguir){
        printf("Ingrese la cantidad de numeros que ingresara: ");
        scanf("%d", &longitud);
        buscar_letra(longitud);
        printf("\nPara cerrar el programa presione 0: ");
        scanf("%d", &seguir);
    }
    return 0;
}

void buscar_letra(int longitud){
    int numeros[longitud];
    int numero_buscar = 0;
    for(int i = 0; i<longitud; i++){
        printf("\nIngrese el %d° numero: ", i);
        scanf("%d", &numeros[i]);
    }
    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &numero_buscar);
    for(int i = 0; i<longitud; i++){
        if(numeros[i] == numero_buscar){
            printf("\nEl numero %d se encuentra por primera vez en la posición %d", numero_buscar, i);
            break;
        }
        else if(i == longitud && numeros[longitud] != numero_buscar){
            printf("\n-1");
        }
    }
    
}

