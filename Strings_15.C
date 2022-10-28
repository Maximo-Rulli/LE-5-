#include <stdio.h>

int contador_vocal(char *);
int main(void) {
    char seguir = 1;
    unsigned char mi_string[20];
    while(seguir!=0){
        printf("Ingrese una palabra de longitud 20 como máximo: ");
        scanf("%s", mi_string);
        contador_vocal(mi_string);
        printf("\nPara cerrar el programa presione 0: ");
        scanf("%d", &seguir);
    }
    return 0;
}

int contador_vocal(char * mi_string){
    int vocales[] =          {0,   0,   0,   0,   0};
    char vocales_letras[] = {'a', 'e', 'i', 'o', 'u'};
    for(int i = 0; i<20; i++){
        if(mi_string[i] == 'a'){
            vocales[0]++;
    }
        if(mi_string[i] == 'e'){
            vocales[1]++;
    }
        if(mi_string[i] == 'i'){
            vocales[2]++;
    }
        if(mi_string[i] == 'o'){
            vocales[3]++;
    }
        if(mi_string[i] == 'u'){
            vocales[4]++;
    }
  }
    for (int i = 0; i<5; i++){
        printf("\n En %s hay %d '%c'", mi_string,vocales[i], vocales_letras[i]);   
  }
  
}
