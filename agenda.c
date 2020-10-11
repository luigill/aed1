#include <stdio.h>
#include <stdlib.h>

int menu(); //declaração da funçao menu

int main(){

    int opcao = 0; //inicialização da variável de opção do menu

    while(opcao != 4 ){     //início da execução do laço -> execução do programa em si

        opcao = menu(); //chamada da função menu, onde são apresentadas as opções para o usuário e 
                        // nessa função se retorna o valor da opção escolhida pelo usuário


        switch(opcao){                              //switch para cada funcionalidade da aplicação
            case 1:
            printf("Opção 1: Cadastrar Usuário\n");
            break;

            case 2:
            printf("Opção 2: Remover Usuário\n");
            break;

            case 3:
            printf("Opção 1: Listar todos Usuários\n");
            break;

            case 4: //término da execução
                break;

            default:    //números inválidos 
                printf("Opção Inválida\n");
            break;
        }

    }


    return 0;
}

int menu(){

    //função de inicialização da aplicação 

    int opcao = 0; //inicialização da variável que vai ser retornada

    printf("MENU:\n");
    printf("1-Cadastrar Contato:\n");
    printf("2-Remover Contato:\n");
    printf("3-Listar Contato:\n");
    printf("4-Sair:\n");
    //Menu de funcionalidades

    scanf("%d",&opcao); //opção escolhida pelo usuário

    return opcao; //retorna a opção escolhida
}
