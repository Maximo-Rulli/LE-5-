#include <stdio.h>
#include <stdio_ext.h>

void buscar_num(int longitud);

int main(void) {
    unsigned int seguir = 1;
    unsigned int longitud;
    while(seguir){
        printf("Ingrese la cantidad de numeros que ingresara: ");
        scanf("%d", &longitud);
        __fpurge(stdin);
        buscar_num(longitud);
        printf("\nPara cerrar el programa presione 0: ");
        scanf("%d", &seguir);
        __fpurge(stdin);
    }
    return 0;
}

void buscar_num(int longitud){
    int numeros[longitud];
    int numero_buscar = 0;
    char encontrar = 0;
    for(unsigned int i = 0; i<longitud; i++){
        printf("\nIngrese el %d° numero: ", ++i);
        scanf("%d", &numeros[--i]);
        __fpurge(stdin);
    }
    printf("\nIngrese el numero a buscar: ");
    scanf("%d", &numero_buscar);
    __fpurge(stdin);
    for(unsigned int i = 0; i<longitud; i++){
        if(numeros[i] == numero_buscar){
            printf("\nEl numero %d se encuentra en la posición %d", numero_buscar, i);
            encontrar = 1;
        }
        if((numeros[(longitud-1)] != numero_buscar) && (i == longitud-1) && (encontrar==0)){
            printf("No se encontro %d entre los números ingresados", numero_buscar);
            printf("\n-1");
        }
    }
    
}
