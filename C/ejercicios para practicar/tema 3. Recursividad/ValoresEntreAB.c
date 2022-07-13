#include <stdio.h>
int ack(int m,int n);
int main()
{

	int m,n,t;
	printf("\n Valores entre M,N \n");
	printf("\n Ingrese el valor de m: ");
	scanf("%d",&m);
	printf("\n Ingrese el valor de n: ");
	scanf("%d",&n);
	t=ack(m,n);
	//printf("\n La funcion de sum(x) para x=%d es: %d ",m,t);
		
	 return 0;
}
int ack(int m,int n)
{
	if ((n-m)==2){
		printf("\n%d",(n-1));
		return (n-1);	
	}
		
	else{
		printf("\n%d",n-1);
		return ack(m,n-1);
		
	}
		
}