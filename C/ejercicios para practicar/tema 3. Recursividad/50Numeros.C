#include <stdio.h>
int ack(int m,int n);
int main()
{
	ack(1,50);
	return 0;
}
int ack(int m,int n)
{
	if (m<=n)
	{
		return printf("%d\n",m),ack(m+1,n);
	}
		
}

