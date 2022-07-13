#include <stdio.h>
#include <math.h>

int main()
{
	int c1,c2,h,aux;
	for (h=1;h<500;h++)
	{
		for (c1=1;c1<500;c1++)
		{
			if(c1>=h)
			{
				break;
			}
			for (c2=1;c2<500;c2++)
			{
				if(c2>=h)
				{
				break;
				}
				aux=h*h;
				if(aux==(c1*c1+c2*c2))
				{
					printf("%d\t%d\t%d\n",c1,c2,h);
					goto salir;
				}
			}
		}
		salir:
		;
	}
}