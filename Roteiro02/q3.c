/**
 * Lista todos os contatos da agenda que começam com uma letra exspecífica*/
#include<stdio.h>

//Função que lista contatos pela inicial
void listarContatosPorInicial(char);

int main(){
    //pede do usuário que ele informe uma inicial de um nome, e marmazena o conteúdo digitado na variavel char nome
    char nome;
    printf("Informe uma inicial de um nome que listarei as pessoas que possuem essa inicial: ");
    scanf("%c", &nome);
  
    //chama a função passando por parâmetro a variável nome;
    listarContatosPorInicial(nome);
}
//Implementação da função
void listarContatosPorInicial(char c){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    //Abre o arquivo agenda.dat e verifica se ocorreu algum erro em abri-lo
    FILE *file = fopen("agenda.dat", "r");
    if(!file){
        printf("Impossível abrir o arquivo\n");
    }
    //Laço que percorre o arquivo agenda.dat até chegar no seu fim
    while(!feof(file)){
        fscanf(file, "%d %s %s %s", &id, nome, profissao, telefone);
        if(nome[0] == c){//Condição que verifica se a iniciaal dos nomes contidos no agenda.dat é igual a inicial digitada pelo usuário
            printf("(%d) Nome -> (%s) profissao -> (%s) telefone -> (%s)\n", id, nome,profissao
             ,telefone);//Imprime os elementos da agenda.dat que possuem as mesmas iniciais
        }
    }
    fclose(file);

}

