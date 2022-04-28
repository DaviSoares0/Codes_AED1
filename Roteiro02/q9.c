//Editar numero de telefone a partir de um indentificador (ID)
#include<stdio.h>

void editarTelefone (int IDA); 

int main(){
    //Pede do usuário que ele diga qual id ele deseja alterar o número de delefone
    int t; 
    printf("Insira o id do contato que deseja alterar o número de telefone: ");
    scanf("%i",&t);

    editarTelefone(t); //Chamei a função usando essa variavel
}

void editarTelefone(int IDA){
    //Criei dois ponteiros para abrir os dois arquivos
    FILE *f1 = fopen("agenda_aux.dat", "w"); //esse arquivo é para escrever
    FILE *f2 = fopen("agenda.dat", "r");    // esse arquivo é para ler as informações da agenda

    //Essas são as variaveis que vão receber as informações das agendas/arquivos
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    if (!f1){ //Se o arquivo que o ponteiro está apontando não abrir, essa vai ser a mensagem que vai aparecer
        printf("Impossivel abrir o arquivo\n");
    }
    if(!f2){ //Se o arquivo que o ponteiro está apontando não abrir, essa vai ser a mensagem que vai aparecer
        printf("Impossivel abrir esse arquivo\n");
    }

    while (!feof(f2)){ //Criei um laço de repetição que só vai parar quando chegar ao fim do arquivo
        //Esse fscanf vai ler todos os elementos que estiverem no arquivo em que o ponteiro está apontando, no caso o agenda.dat
        fscanf(f2,"%d %s %s %s", &id, nome, profissao, telefone);

        //Coloquei esse printf para mostrar ao usuario todos os nomes
        printf("(%d) (%s) (%s)\n",id, nome, telefone);

        /*Enquanto o id for diferente do que o usuario pediu esse fprintf vai ficar colando as mesmas informações no arquivo em que o
        ponteiro está apontando, nesse caso o arquivo agenda_aux.dat*/
        if(id != IDA){
            fprintf(f1,"\n%d %s %s %s", id, nome, profissao, telefone);

        }else if(id == IDA){ //Aqui vai parar no id que o usuário informou e vai pedir um novo número de telefone
            printf("\n\nInforme um novo número de telefone para esse contato: ");
            scanf("%s",telefone);
            //Com isso coloquei outro fprintf para colocar la no arquivo o nome com o novo número de telefone que o usuario modificou desse id
            fprintf(f1,"\n%d %s %s %s", id, nome, profissao, telefone);
        }
    }  
    fclose(f1);
    fclose(f2);
}