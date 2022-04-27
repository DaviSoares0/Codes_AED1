//Exportar um contato
#include<stdio.h>
#include<string.h>
//função que vai exportar o contato
void exportar(int IDA);

int main(){
    //Pedo do usuário que ele informe o ID do contato que ele quer exportar e o armazena na variável "int e"
    int e;
    printf("Informe o ID do contato que deseja exportar: ");
    scanf("%d",&e);
    //Chama a função exportar passando como parâmetro o ID que o usuário digitou
    exportar(e);
}
//Implementação da função
void exportar(int IDA){
    /*Abre o arquivo agenda.dat*/
    FILE *f1 = fopen("agenda.dat", "r");//Abre o arquivo agenda.dat no modo de apenas leitura
    //Verifica de a abertura do arquivo foi bem succedida
    if(!f1){
        printf("Impossivel abrir esse arquivo");
    }
    FILE *f2 = fopen("ExportarContato.dat", "w"); /* Cria um arquivo que vai receber o cantato exportado de agenta.dat no modo leitura e escrita*/
    //Verifica de a abertura/criação do arquivo foi bem succedida
    if(!f2){
        printf("Impossivel abrir esse arquivo");
    }

    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
    //Laço que percorre o arquivo agenda.dat até seu final
    while(!feof(f1)){
        fscanf(f1,"%d %s %s %s",&id,nome,profissao,telefone);//Lê os contatos de agenda.dat
        if(id == IDA){ /*Condição que captura o ID que estamos procurando*/
            fprintf(f2,"%d %s %s %s", id, nome, profissao, telefone); /*Escreve os dados do ID da agenda.dat no arquivo ExportarContato.dat*/
            rename("ExportarContato.dat", strcat(nome, ".txt")); /*Renomeia o nome do arquivo (ExportarContato.dat) para o nome contido no ID capturado com a extenção .txt*/
            printf("Exportanção realizada com sucesso!\n");
        }
    }
    fclose(f1);
    fclose(f2);
}