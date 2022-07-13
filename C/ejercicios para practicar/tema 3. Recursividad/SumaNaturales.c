#include <stdio.h>
int ack(int m);
int main()
{

	int m,n,t;
	printf("\n Suma n naturales n");
	printf("\n Ingrese el valor de n: ");
	scanf("%d",&m);
	t=ack(m);
	printf("\n La funcion de sum(x) para x=%d es: %d ",m,t);
		
	 return 0;
}
int ack(int m)
{
	if (m==1)
		return 1;
	else
		return m+ack(m-1);
}