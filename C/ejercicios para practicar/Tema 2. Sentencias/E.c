#include <stdio.h>
#include <math.h>

#define Maximo 10
int main()
{
	float e=1;
	int i,j,fact,x;
	x=1;
	for (i=1;i<=Maximo;i++)
	{
		for(j=0;j<i;j++)
		{
		x*=x;
		}
		fact=1;
		for(j=i;j>0;j--){
			fact*=j;
		}
		e+=(float)x/fact;
	}
	printf("resultado: %f",e);
}