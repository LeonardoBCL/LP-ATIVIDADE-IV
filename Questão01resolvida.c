
#include <stdio.h>
#include <string.h>
#include <stdlib.h>







/*Crie uma struct Contato para representar informações de contatos, incluindo nome, número de telefone e email. 
Solicite que o usuário cadastre 3 contatos. 
Escreva uma função que recebe um nome como parâmetro, e retorna o número de telefone correspondente a esse nome.
Em seguida, implemente um programa que utiliza essa função para buscar
e imprimir o número de telefone de um contato específico.*/

#define TAM 3

struct contatos{
	
	char nome[200];
	char numero_tel[200];
	char email[200];
	
};



char *identificador (struct contatos agenda_de_contatos[], char *nome){
/////////	
	
	int contador;
	
	for(contador = 0; contador < TAM; contador++){
		
	
	if (strcmp(agenda_de_contatos[contador].nome, nome) == 0)
	{
		return agenda_de_contatos[contador].numero_tel;
	}
	
	
	}
	
//////////
}




int main(){
	
	//Selecionar a struct:
	
	struct contatos agenda_de_contatos[TAM];
	
	////////////////////////////////////////////
	int contador;
	
	
	for(contador = 1; contador < TAM; contador++){
	
	printf("--------Tela de cadastro---------\n");
	
	printf("Tela do %d cadastro: \n", contador);
	printf("Por favor, registre o seu nome:\n ");
	gets(agenda_de_contatos[contador].nome);
    fflush(stdin);
	printf("Por favor, registre o numero de telefone: \n ");
	gets(agenda_de_contatos[contador].numero_tel);
	
    fflush(stdin);
	printf("Por favor, insira o seu email: ");
	gets(agenda_de_contatos[contador].email);
	
	
	}
	
	
	char buscar_nome[200];
	printf("Digite o nome que desesja para buscar o telefone correspondente: ");
	gets(buscar_nome);
	
	
	char *telefone_encontrado;

	telefone_encontrado = identificador(agenda_de_contatos, buscar_nome);
	
	if(telefone_encontrado != 0)
	{
		printf("Telefone encontrado: %s", telefone_encontrado);
	}
	else
	{
		printf("Contato não encontrado");
	}
	
	return 0;
	
	
	
}





