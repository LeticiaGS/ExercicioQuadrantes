#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int x,y, distancia, pontos;
	printf ("Digite o ponto onde o dardo caiu (coordenada x,y)");
	printf ("\nDigite o valor de x: ");
	scanf ("%d",&x);
	printf ("\nDigite o valor de y: ");
	scanf ("%d",&y);
	/*calculando a distância do ponto do dardo (x,y) 
	até o ponto (0,0), que é o centro do alvo
	 
	Equação para encontrar distância entre dois pontos:
	dab = raiz((Xb-Xa)ˆ2 + (Yb-Ya)ˆ2)
	
	Para elevar ao quadrado, usamos a função pow (valor,expoente)  
	Para calcular a raiz quadrada usamos a função sqrt(valor)
	Ambas as funções estão na biblioteca math.h (veja nos includes)	
	
	*/
	distancia = sqrt(pow((x-0),2) + pow((y-0),2));
	printf ("\nDistancia: %d",distancia);
	
	/* a partir da distância, podemos obter um "raio" que vai do centro do alvo ao ponto onde o dardo atingiu. Então comparamos com os tamanhos dos diferentes raios do alvo*/
	if (distancia<=1)
		pontos=10;
	else
		if (distancia<=5)
			pontos = 5;
		else	
			if (distancia<=10)
				pontos = 1;
			else //nesse caso caiu fora dos círculos do alvo
				pontos=0;	
	printf ("\nPontos obtidos: %d",pontos);
}