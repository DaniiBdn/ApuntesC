#include <stdio.h>
int ack(int m);
int main()
{

	int m,n,t;
	printf("\n Numero de digitos de M \n");
	printf("\n Ingrese el valor de m: ");
	scanf("%d",&m);
	
	t=ack(m);
	printf("\n La funcion de sum(x) para x=%d es: %d ",m,t);
		
	 return 0;
}
int ack(int m)
{
	if (m/10==0){
		return 1;	
	}
		
	else{
		return 1+ack(m/10);
	}
		
}