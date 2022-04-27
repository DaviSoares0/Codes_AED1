/**
 * Lista todos os contatos da agenda por nome e telefone*/
#include<stdio.h>
//função que vai listar os contatos por nome e telefono
void listarContatos();

int main(){
    listarContatos();   //chamando a função de lsiat contatos no main()
}
//implementando a função
void listarContatos(){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *file = fopen("agenda.dat", "r"); //Abre o arquivo agenta.dat no modo de apenas leitura "r"
    //Verifica se o arquivo abriu corretamente
    if(!file){
        printf("Impossível abrir o arquivo\n");
    }
    //Laço que percorre todo arquivo
    while(!feof(file)){ //  A função feof() descobre se o fim do arquivo foi encontrado
        fscanf(file, "%d %s %s %s", &id, nome, profissao, telefone); //Faz a leitura dos elementos do arquivo agenda.dat
        printf("Nome -> (%s) numero->(%s)\n", nome, telefone); //Imprime os elementos "nome" e "telefone" da agenda.dat
    }
    fclose(file);
}