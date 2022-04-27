
 /** Remova um contato a partir de um identificador (ID)*/
#include<stdio.h>
//função que remove um contato apartir de um ID
void apagar(int id);

int main(){
    //Lê do usuário o número do ID e o armazena na variável int id;
    int id;
    printf("Informe o ID da agenda que deseja excluir: ");
    scanf("%d", &id);
    //Chama a função responsável por remover o contato, passando o ID digitidado pelo usuário por parâmetro
    apagar(id);
}

void apagar(int idA){
    //cria um arquivo auxilia para armazenar os outros elementos de agenda.dat que não serão removidos
    FILE *f1 = fopen("agenda_aux.dat", "w"); //Arquivo criado/arberto com possibilidade de leitura e escrita

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
    //Abre o arquivo agenda.dat no modo de leitura 
    FILE *f2 = fopen("agenda.dat", "r");
    //Verifica se a abertura do arquivo pode ser feita
    if(!f2){
        printf("Impossível abrir o arquivo\n");
    }

    printf("\nAgenda antes da exclusão\n");
    //Laço que percorre o arquivo agenda.dat até seu final
    while(!feof(f2)){
        fscanf(f2, "%d %s %s %s", &id, nome, profissao, telefone); //Faz a leitura dos elementos do arquivo agenda.dat
        printf("(%d) (%s) (%s)\n", id, nome, telefone); //Imprime os elementos id, nome e telefone do arquivo agenda.dat
        if(id != idA){//Verifica se o id dos elementos do arquivo agenda.dat é diferente ao id digitado pelo usuárioo
            fprintf(f1, "%d %s %s %s\n", id, nome, profissao, telefone);// Se a condição for satisfeita, escreve os contatos no arquivo agenda_aux.dat
        }
    }
    printf("\n\nExclusão realizada com sucesso\n\n");
    fclose(f1);
    fclose(f2);
    //remove("agenda.dat"); remove o arquivo agenda.dat
    //rename("agenda_aux.dat", "agenda.dat"); renomeia agenda_aux.dat para agenda.dat

    FILE *f3 = fopen("agenda_aux.dat", "r"); // Abre o arquivo renomeado
    //Verifica se foi possível abrir o arquivo
    if(!f3){
        printf("Impossível abrir o arquivo\n");
    }
    //laço que percorre o arquivo agenda.dat até seu final
    while(!feof(f3)){
        fscanf(f3, "%d %s %s %s", &id, nome, profissao, telefone);//Lê os elementos do arquivo
        printf("(%d) (%s) (%s)\n", id, nome, telefone);// imprime os elementos
    }
    fclose(f3); //Fecha o arquivo

}