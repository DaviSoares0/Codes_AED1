/**
 * Lista todos os contatos da agenda que começam com uma letra exspecífica*/
#include<stdio.h>

void listarContatosPorInicial(char);

int main(){

    char nome;
    printf("Informe uma inicial de um nome: ");
    scanf("%c", &nome);
  
    listarContatosPorInicial(nome);
}

void listarContatosPorInicial(char c){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *file = fopen("agenda.dat", "r");
    if(!file){
        printf("Impossível abrir o arquivo\n");
    }

    while(!feof(file)){
        fscanf(file, "%d %s %s %s", &id, nome, profissao, telefone);
        if(nome[0] == c){
            printf("Nome -> (%s) telefone -> (%s)\n", nome, telefone);
        }
    }
}