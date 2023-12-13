#include <stdio.h>
#include <stdlib.h>


//Struct Produto:
struct produto {
    char nome_produto[200];
    float preco;
    int quantidade;

};



int main(){

    int opcao;


    do{
    printf("Bem vindo ao menu. Selecione as opções:\n ");
    printf("[1]. Realizar uma compra. \n");
    printf("[2]. Consultar estoque. \n ");
    printf("[3]. Sair do programa  \n");
    scanf("%d", &opcao);
    }while (opcao != 3);




}







