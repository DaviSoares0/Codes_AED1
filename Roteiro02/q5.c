//Listar contatos em função da profissão
#include<stdio.h>

void listarContatosPorProfissao(char *p);

int main(){
char t [80];
char *ponteiro = &t[80];
    printf("Informe uma profissão e listarei os contatos que trabalham nessa área: ");
    scanf("%c",&t[80]);
    listarContatosPorProfissao(ponteiro);    
}

void listarContatosPorProfissao(char *p){
    int id;
    char nome[80];
    char profissao[80];
    char telefone[80];

    FILE *f1 = fopen("agenda.dat", "r");
    FILE *f2 = fopen("agenda_aux.dat", "w");
    if(!f1){
        printf("Impossivel abrir esse arquivo\n");
    }

    if(!f2){
        printf("Impossivel abrir esse arquivo\n");
    }

    while (!feof(f1)){
        int i;
        fscanf(f1,"%d %s %s %s", &id, nome, profissao, telefone);
        
       
    }
}