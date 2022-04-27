/*Apagando todos os contatos*/
#include<stdio.h>
//Função que apaga todos os contatos
 void apagarContatos();

 int main(){
    //Chamada da função
    apagarContatos();
 }
//Implementação da função
 void apagarContatos(){
     //Abre o arquivo agenda.dat no modo leitura
     FILE *f1 = fopen("agenda.dat", "r");
    //Verifica se deu certo abrir o arquivo
      if(!f1){
        printf("Impossível abrir o arquivo\n");
    }
    //Cria um arquivo chamado agenda_aux.dat no modo leitura e escrita
    FILE *f2 = fopen("agenda_aux.dat","w");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
     
    //Laço que percorre os contatos do arquivo agenda.dat 
    while(!feof(f1)){
        fscanf(f1,"%d %s %s %s", &id, nome, profissao, telefone); //Lê os contatos
        fprintf(f2,"(%d) contato Excluido\n", id); // Escreve is IDs de agenda.dat em agenda_aux.dat com a menssagem "contato Excluido"
    }
    fclose(f1);
    fclose(f2);


   // remove("agenda.dat");
   // rename("agenda_aux.dat", "agenda.dat");

    printf("Todos os contados foram excluidos\n");

 }