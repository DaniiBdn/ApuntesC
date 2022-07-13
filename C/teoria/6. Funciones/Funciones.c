#include <stdio.h>
void PasoValorReferencia(int *array,int valor)
{
 array[5]=-8.6;
 valor=4;
}
int main(void)
{
 int array[10]={0,0,0,0,0,0,0,0,0,0};
 PasoValorReferencia(array,array[3]);
 printf("Array[5] vale: %d y array[3] vale:%d\n",array[5],array[3]);
 return 0;
}
//static en una función se local al modulo donse se encuentre pero no por el resto de modulos. Simplifica programacion en proyectos grandes.