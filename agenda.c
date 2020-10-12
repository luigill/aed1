#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int menu(); //declaração da funçao menu
int insere();
int listar();

int main(){

    int opcao = 0; //inicialização da variável de opção do menu
    char *string; //ponteiro de inicio da string que vai conter os nomes
    char *ini;

    string = (char *) malloc (20 * sizeof(char));

    ini = string;

    while(opcao != 4 ){     //início da execução do laço -> execução do programa em si

        opcao = menu(); //chamada da função menu, onde são apresentadas as opções para o usuário e 
                        // nessa função se retorna o valor da opção escolhida pelo usuário


        switch(opcao){                              //switch para cada funcionalidade da aplicação
            case 1:
            printf("Opção 1: Adicionar Nome\n");

            insere(string,ini);

            break;

            case 2:
            printf("Opção 2: Remover Nome\n");
            break;

            case 3:
            printf("Opção 3: Listar todos os Nomes\n");
            listar(string);
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
    printf("1)Adicionar Nome:\n");
    printf("2)Remover Nome:\n");
    printf("3)Listar:\n");
    printf("4)Sair:\n");
    //Menu de funcionalidades

    scanf("%d",&opcao); //opção escolhida pelo usuário

    return opcao; //retorna a opção escolhida
}

int insere(char *string, char *ini){

    printf("Digite o nome desejado:\n");
    scanf("%s",string);

    string = realloc(string, sizeof(string)+20);

    return 0;

}

// void remove(char *string){


// }

int listar(char *string){
    printf("%s\n",string);
    return 0;
}