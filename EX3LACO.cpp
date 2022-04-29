#include <stdio.h>
#include <stdlib.h>


int main() {

	float num, fatoriale = 1;

	printf("Informe um numero: ");
	scanf_s("%f", &num);

	for (int i = num; i > 1; i--)     // variavel ; condição ; incrementador ou decrementador .... Aqui no for eu tive que criar uma variavel por fora, para que pudesse 
		// inicializa-la e controla-la variavel 'i' 
	{
		fatoriale = fatoriale * i; // nesre caso a variavel fatoriale recebe um valor, este valor retorna multiplicandoa variavel i com o resultado anterior da variavel fatoriale
		printf("%2.f\n", fatoriale);
	}

	printf("%.2f\n\n", fatoriale);
	system("PAUSE");
	return(0);
}

