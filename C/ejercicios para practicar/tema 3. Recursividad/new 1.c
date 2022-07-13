#include <stdio.h>
ack(int m,int n);
int main()
{

	int m,n,t;
	printf("\n x^y\n");
	printf("\n Ingrese el valor de x: ");
	scanf("%d",&m);
	printf("\n Ingrese el valor de y: ");
	scanf("%d",&n);
	t=ack(m,n);
	printf("\n La funcion de x^y para x=%d y y=%d es: %d ",m,n,t);

	return 0;
}
ack(int m,int n)
{
	if (n==1)
		return m;
	else
		return m+ack(m,n-1);
}