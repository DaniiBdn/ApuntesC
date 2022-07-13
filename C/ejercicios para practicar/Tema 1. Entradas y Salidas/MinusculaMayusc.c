#include <stdio.h>

int main()
{
	char minuscula;
	while(1){
	
	printf("Minuscula: ");
    scanf("%c",&minuscula);

    printf("Mayuscula: %c \n", minuscula-32);
    getchar();

	}

    return 0;
}