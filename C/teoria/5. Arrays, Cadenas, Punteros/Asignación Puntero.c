#include <stdio.h>
int main() 
{
	//variables punteros
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    num1 = 10;
    num2 = 20;

    ptr1 = ptr2;
    ptr2 = NULL;
	
	*ptr1 = 30;
    *ptr2 = 40;
	/*
	void tablero(int *estado2,int *bombas2);

    int estado[8][8];
    int bombas[8][8];
    
    tablero(&estado[0][0],&bombas[0][0]);
	*(estado2+k)=0;    
    *(bombas2+k)=0;
    k+=1;
	*/
    return 0;
}