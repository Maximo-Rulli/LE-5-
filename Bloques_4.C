#include <stdio.h>
#include <stdio_ext.h>

float resultado ();
int main ()
{
  resultado();
  return 0;
}
float resultado (){
    float numeros[10];
    float positivos = 0.0;
    float negativos = 0.0;
    for (char i = 0; i < 10; i++){
        printf ("Ingrese el %d° número: ", ++i);
        scanf ("%f", &numeros[--i]);
        __fpurge(stdin);
        while (numeros[i] == 0){
            printf ("Ingrese el %d° número: ", ++i);
            scanf ("%f", &numeros[--i]);
            __fpurge(stdin);
        }
        if(numeros[i]<0){
            if(negativos == 0.0)
                negativos = numeros[i];
        
            else
                negativos = negativos * numeros[i];
        }
        
        else
            positivos = positivos + numeros[i];  
    }        
    printf("La suma de los números positivos es de: %f\n", positivos);
    printf("El producto de los números negativos es de: %f\n", negativos);
}
