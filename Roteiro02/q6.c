
 /** Remova um contato a partir de um identificador (ID)*/
#include<stdio.h>

void apagar(int id);

int main(){
    int id;
    printf("Informe o ID da agenda que deseja excluir: ");
    scanf("%d", &id);
    apagar(id);
}

void apagar(int idA){
    FILE *f1 = fopen("agenda_aux.dat", "w");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *f2 = fopen("agenda.dat", "r");

    if(!f2){
        printf("Impossível abrir o arquivo\n");
    }

    printf("\nAgenda antes da exclusão\n");

    while(!feof(f2)){
        fscanf(f2, "%d %s %s %s", &id, nome, profissao, telefone);
        printf("(%d) (%s) (%s)\n", id, nome, telefone);
        if(id != idA){
            fprintf(f1, "%d %s %s %s\n", id, nome, profissao, telefone);
        }
    }
    printf("\n\nExclusão realizada com sucesso\n\n");
    fclose(f1);
    fclose(f2);
    remove("agenda.dat");
    rename("agenda_aux.dat", "agenda.dat");

    FILE *f3 = fopen("agenda.dat", "r");

    if(!f3){
        printf("Impossível abrir o arquivo\n");
    }

    while(!feof(f3)){
        fscanf(f3, "%d %s %s %s", &id, nome, profissao, telefone);
        printf("(%d) (%s) (%s)\n", id, nome, telefone);
    }
    fclose(f3);
}