/**
 * Lista todos os contatos da agenda por nome e telefone*/
#include<stdio.h>

void listarContatos();

int main(){
    listarContatos();
}

void listarContatos(){
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
        printf("Nome -> (%s) numero->(%s)\n", nome, telefone);
    }
}