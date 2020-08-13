#include <stdio.h>
#include <stdlib.h>


/* Função: aplicação que gera aleatoriamente 100 numeros positivos entre 0 e 1000 e que calcula a soma e a media dos numeros que sao primos.
   Autor:  Luís Filipe */

int main(int argc, char *argv[]) {
	
	//Declarar variaveis
	int numero, i , j, div,soma,contador;
	float media;
	
	//limpar ecra
	system("cls");
	
	//Inicializar variaveis
	soma = 0;
	contador = 0;
	
	//relacionar a geraçao aleatorio à hora do sistema
	srand(time(NULL));
	
	//gerar numeros aleatorios
	for(i = 0; i < 100; i++)
	{
		//gerar numero aleatorio
		numero = rand() % 1000;
		
		//Mostrar numero gerado 
		printf("%02dº gerado: %d\n", (i+1), numero);
		
		div = 0; //Inicicializar a 0 para que a cada iteração o valor seja 0, senão após encontrar o 1 primo não serão contados os outros devido ao div já se encontrar a 2.
		
		//Verificar se é primo
		for(j = 1; j <= numero; j++)
		{
			if(numero % j == 0)
			{
				div++;
			}
		}
		if (div == 2) 
		{
			contador++; //Contar o numero de primos encontrados;
			soma += numero; //Soma de todos os numeros primos;
		}
			
	} 
	
	//Calculo da media dos numeros primos
	media = (float) soma / contador;
	
	//Apresentação dos dados obtidos
	printf("A soma de todos os numeros primos e de: %d", soma);
	printf("\nA media de todos os numeros primos e de: %.2f", media);
	
	//pausa
	getchar();
}
