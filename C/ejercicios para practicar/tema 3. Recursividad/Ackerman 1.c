#include <stdio.h>

// Prototipos de la funciones del programa

int ack(int m, int n);
int main()
{
	while(1){
		int m,n,t;
		printf("\n FUNCION DE ACKERMAN\n");
		printf("\n Ingrese el valor de m: ");
		scanf("%d",&m);
		printf("\n Ingrese el valor de n: ");
		scanf("%d",&n);
		t=ack(m,n);
		printf("\n La funcion de Ackerman para m=%d y n=%d es: %d ",m,n,t);
		
	}
 

 return 0;
}
int ack(int m, int n)
{
 if(m==0)
	return n+1;
else if (n==0)
	return ack(m-1,1);
else
	ack(m-1,ack(m,n-1));
}