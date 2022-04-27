//Editar um contato a partir de um indentificador (ID)
#include<stdio.h>

void editar(int idA); //Definir uma função
int main(){
int a; //criei uma variavel para receber o id que o usuario deseja editar
    printf("Informe o id do contato que deseja editar: ");
    scanf("%i",&a);

    editar(a); //Chamei a função usando essa variavel
}

void editar(int idA){
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

    if(!f2){  //Se o arquivo que o ponteiro está apontando não abrir, essa vai ser a mensagem que vai aparecer
        printf("Impossivel abrir o arquivo\n");
    }
    
    while(!feof(f2)){ //Criei um laço de repetição que só vai parar quando chegar ao fim do arquivo
        //Esse fscanf vai ler todos os elementos que estiverem no arquivo em que o ponteiro está apontando, no caso o agenda.dat
        fscanf(f2, "%d %s %s %s",&id, nome, profissao, telefone);

        //Coloquei esse printf para mostrar ao usuario todos os nomes
        printf("(%d) (%s) (%s)\n",id, nome, telefone);
    
        /*Enquanto o id for diferente do que o usuario pediu esse fprintf vai ficar colando os nomes no arquivo em que o
        ponteiro está apontando, nesse caso o arquivo agenda_aux.dat*/
        if(id != idA){
            fprintf(f1,"%d %s %s %s\n",id, nome, profissao,telefone);

        }else if(id == idA){ //Aqui vai parar no id que o usuário informou e vai pedir um novo nome
            printf("Insira um novo nome para esse id: ");
            scanf("%s",nome);
            //Com isso  coloquei outro fprintf para colocar la no arquivo o nome que o usuario modificou desse id
            fprintf(f1,"%d %s %s %s\n",id, nome, profissao,telefone);    
        }       
    }
    fclose(f1);
    fclose(f2);
}
