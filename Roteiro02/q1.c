/**
 * Lista todos os contatos da agenda por nome*/
#include<stdio.h>

//função que vai listar os contatos
void listarContatos();

int main(){
    //chamando a função de lsiat contatos no main()
    listarContatos();
}

//implementando a função
void listarContatos(){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    //Abre o arquivo agenta.dat no modo de apenas leitura "r"
    FILE *file = fopen("agenda.dat", "r");
    //Verifica se o arquivo abriu corretamente
    if(!file){
        printf("Impossível abrir o arquivo\n");
    }
    //Laço que percorre todo arquivo
    while(!feof(file)){ //  A função feof() descobre se o fim do arquivo foi encontrado
        fscanf(file, "%d %s %s %s", &id, nome, profissao, telefone); //Faz a leitura dos elementos do arquivo agenda.dat
        printf("(%d) (%s) (%s) (%s)\n", id, nome, profissao, telefone); //Imprime os elementos da agenda.dat
    }
    fclose(file);
}
