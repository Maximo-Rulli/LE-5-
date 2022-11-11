#include <stdio.h>
#include <stdio_ext.h>

int contador_vocal(char []);
int main(void) {
    unsigned int seguir = 1;
    unsigned char mi_string[21];
    while(seguir!=0){
        printf("Ingrese una palabra de longitud 20 como máximo: ");
        /*
        Con esto la consigna es cumplida pero para mayor comodidad del usuario se usa solo un scanf() con %s
        for(unsigned char i = 0; i<21; i++){
            scanf("%c", &mi_string[i]);
            __fpurge(stdin);
        }
        */
        scanf("%s", mi_string);
        __fpurge(stdin);
        contador_vocal(mi_string);
        printf("\nPara cerrar el programa presione 0: ");
        scanf("%u", &seguir);
        __fpurge(stdin);
    }
    return 0;
}

int contador_vocal(char mi_string[]){
    int vocales[] =          {0,   0,   0,   0,   0};
    char vocales_letras[] = {'a', 'e', 'i', 'o', 'u'};
    for(int i = 0; i<21; i++){
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
    for (char i = 0; i<5; i++)
        printf("\n En %s hay %d '%c'", mi_string, vocales[i], vocales_letras[i]);   
  
}
