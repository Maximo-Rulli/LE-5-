/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

float resultado ();
int main ()
{
  resultado();
  return 0;
}

float resultado ()
{
  float numeros[10];
  float positivos = 0.0;
  float negativos = 0.0;
  for (char i = 0; i < 10; i++)
    {
      printf ("Ingrese el %d° número: ", i++);
      i--;
      scanf ("%f", &numeros[i]);
      while (numeros[i] == 0){
        printf ("Ingrese el %d° número: ", i++);
        i--;
        scanf ("%f", &numeros[i]);
	  }
      if(numeros[i]<0){
        if(negativos == 0.0){
            negativos = numeros[i];
        }
        else{
            negativos = negativos * numeros[i];
        }
      }
      else{
        positivos = positivos + numeros;  
      }
    }
    printf("La suma de los números positivos es de: %f\n", positivos);
    printf("El producto de los números negativos es de: %f\n", negativos);
}
    
