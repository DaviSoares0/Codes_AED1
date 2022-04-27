//Exportar um contato
#include<stdio.h>
#include<string.h>

void exportar(int IDA);

int main(){
int e;
    printf("Informe o ID do contato que deseja exportar: ");
    scanf("%d",&e);
    exportar(e);
}

void exportar(int IDA){
    /*Abre o arquivo agenda.dat*/
    FILE *f1 = fopen("agenda.dat", "r");
    FILE *f2 = fopen("ExportarContato.dat", "w"); /*Esse arquivo vai receber o cantato exportado de agenta.dat*/

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
    
    if(!f1){
        printf("Impossivel abrir esse arquivo");
    }
    /*Cria um arquivo chamado ExportarContato.dat*/
   
    if(!f2){
        printf("Impossivel abrir esse arquivo");
    }

  
    while(!feof(f1)){
        fscanf(f1,"%d %s %s %s",&id,nome,profissao,telefone);
        if(id == IDA){ /*Condição que captura o ID que estamos procurando*/
            fprintf(f2,"%d %s %s %s", id, nome, profissao, telefone); /*Escreve os dados do ID da agenda.dat no arquivo ExportarContato.dat*/
            rename("ExportarContato.dat", strcat(nome, ".txt")); /*Renomeia o nome do arquivo (ExportarContato.dat) para o nome contido no ID capturado com a extenção .txt*/
            printf("Exportanção realizada com sucesso!\n");
        }
    }
    fclose(f1);
    fclose(f2);
}