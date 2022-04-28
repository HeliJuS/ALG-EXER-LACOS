#include <stdio.h>
#include <stdlib.h>


int main() {

	float num1,soma = 0;

	do
	{
		printf("Digite outro numero: ");
		scanf_s("%f", &num1);

		soma = soma + num1;

		printf("soma: %.2f\n", soma);
	} while (num1 != 0);

	system("PAUSE");
	return(0);
}
