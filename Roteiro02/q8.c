//Editar o nome de um contato a partir de um indentificador (ID)
#include<stdio.h>

void editar(int idA);

int main(){
    int a;
    printf("Informe o id do contato que deseja editar: ");
    scanf("%i",&a);
    editar(a);
}

void editar(int idA){
    FILE *f1 = fopen("agenda_aux.dat", "w");
    FILE *f2 = fopen("agenda.dat", "r");

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    if(!f2){
        printf("Impossivel abrir o arquivo\n");
    }

    while(!feof(f2)){
        fscanf(f2, "%d %s %s %s",&id, nome, profissao, telefone);
            if(id != idA){
                fprintf(f1,"%d %s %s %s\n",id, nome, profissao,telefone);
            }else if(id == idA){
                printf("(%d) (%s) (%s)\n",id, nome, telefone);
                printf("Insira um novo nome para esse id: ");
                scanf("%s",nome);
                fprintf(f1,"%d %s %s %s\n",id, nome, profissao,telefone); 
                printf("(%d) (%s) (%s)\n",id, nome, telefone);   
            }       
    }
    fclose(f1);
    fclose(f2);

}