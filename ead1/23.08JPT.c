#include<stdio.h>

int main(){
		float peso = -1, excesso, multa;
		
		//entrada
		while (peso < 0 || peso > 10000){
			printf("Joao, digite quantos quilos de peixe pescou hoje: ");
			scanf("%f", &peso);
		}
		
		//processamento
		if(peso > 50){
			excesso = peso - 50;
			multa = excesso * 4;
			printf("Joao, voce pescou %.1kg em excesso, deve pagar uma multa de RS%.2f", excesso, multa);
		}else{
			printf("Hoje sua pesca dentro do regulamento, menos de 50kg ");
		}
}

