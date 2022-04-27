/*Apagando todos os contatos*/
#include<stdio.h>

 void apagarContatos();

 int main(){
     apagarContatos();
 }

 void apagarContatos(){

     FILE *f1 = fopen("agenda.dat", "r");
      if(!f1){
        printf("Impossível abrir o arquivo\n");
    }
     FILE *f2 = fopen("agenda_aux.dat","w");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
     
    
     while(!feof(f1)){
        fscanf(f1,"%d %s %s %s", &id, nome, profissao, telefone);
        fprintf(f2,"(%d) contato Excluido\n", id);
    }
    fclose(f1);
    fclose(f2);


   // remove("agenda.dat");
   // rename("agenda_aux.dat", "agenda.dat");

    printf("Todos os contados foram excluidos\n");

 }