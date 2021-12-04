#include <stdio.h>
int main( ){
   printf("***********************\n", );
   printf("Bem vindo ao nosso jogo de adivinhação");
   printf("***********************\n", );




int numerosecreto = 42;

int chute;

for( i = 1; i <= 3; i++) {

printf("Qual é o seu chute?");
scanf("%d", &chute);
printf("Seu chute foi %d", chute );

int acertou = ( chute == numerosecreto)

if (acertou) {
printf("Parabéns! Voce acertou\n");
printf("Jogue de novo, voce é um bom jogador \n");
}

else {
	int maior = chute > numerosecreto
	if(maior) {
        printf("Seu chute foi maior do que o número secreto!\n");
    } else {
    	printf("Seu chute foi menor do que o número secreto!\n");
    }
    
printf("Voce errou!\n");
printf("Mas não desanime, tente de novo!\n");
}
    }


printf("Fim de jogo!\n");