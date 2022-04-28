//Acessar um contato através de um indice
#include<stdio.h>
//função para acessar o ID
void acessar(int ID);

int main(){
	//pede que o usuário digite o ID que ele deseja acessar
	int a;    
    printf("Informe o ID do contato que deseja acessar: ");
    scanf("%i",&a);
    acessar(a);
}

void acessar(int ID){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];
	//Abre o arquivo agenda.dat
    FILE *file = fopen("agenda.dat", "r");
    if(!file){
        printf("Impossivel abrir o arquivo\n");
    }
	//Laço que percorre o arquivo agenda.dat
    while (!feof(file)){
        fscanf(file, "%d %s %s %s",&id, nome, profissao, telefone);//Lê os elementos do arquivo
        if(id == ID){ //Condição que compara os IDs do arquivo com o ID digitado pelo usuário
            printf("\nO contato acessado foi\n");
            printf("(%d) (%s) (%s) (%s)\n\n",id, nome, profissao, telefone); //Imprime o ID que satisfez a condição
        }
    }
}