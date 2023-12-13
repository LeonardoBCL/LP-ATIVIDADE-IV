#include <stdio.h>
#include <stdlib.h>
#define TAM 2


struct dados_aluno {
char nome[200];
char data_nascimento[200];
float nota_1;
float nota_2;
float media;

};

float calcular_media (float nota_1, float nota_2){
    float resultado_media;
    resultado_media = (nota_1 + nota_2)/2;
    printf("\n A média equivale a: %.2f \n", resultado_media);
    return resultado_media;
}

void Aprovacao(float media){
    if(media >= 7){
        printf("Aprovado!");
    }
    else{
        printf("Reprovado!");
    }
}



int main(){

struct dados_aluno aluno_cadastro [TAM];
int contador;

for(contador = 0; contador < TAM; contador++){
	
	fflush(stdin);
    printf("\n Insira o nome do aluno: \n");
    gets(aluno_cadastro[contador].nome);
    fflush(stdin);


    printf("Insira a data de nascimento: \n");
    gets(aluno_cadastro[contador].data_nascimento);
    fflush(stdin);

    printf("Insira a primeira nota: ");
    scanf("%f", &aluno_cadastro[contador].nota_1);

    printf("Insira a segunda nota: ");
    scanf("%f", &aluno_cadastro[contador].nota_2);

aluno_cadastro[contador].media = calcular_media(aluno_cadastro[contador].nota_1, aluno_cadastro[contador].nota_2);
Aprovacao(aluno_cadastro[contador].media);


}

return 0;


}








