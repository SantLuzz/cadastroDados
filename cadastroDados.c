#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
//cosntantes
#define MAXCADASTROS 50

//var em scopo global
int i;

//definição de funções
typedef struct cadastro{
	int id;
	char title[255];
	float note;
	int duration;
}cadastro;

struct cadastro filme[MAXCADASTROS];

void telaPrincipal();
void cadastraFilme();
void listarFilme();
void buscadorFilme();

void clear(){
	system("cls");
}

void separador(){
	//cria uma linha para separar informações
	printf("\n-----------------------------------\n");
}

//inicio do programa
int main(){
	//mantendo o setlocale os float é separdo em ,
	setlocale(LC_ALL, "Portuguese");
	telaPrincipal();
	return 0;
}
//configuração das funções
void telaPrincipal(){
	fflush(stdin);
	clear();
	int start;
	do{
		printf("\nCADASTRE FILME.ME\n");
		printf("\n                         MENU\n\n");
		printf("1. CADASTRAR FILMES \n2. LISTAR FILMES\n3. BUSCA \n4. SAIR\n");
		separador();
		scanf("%d",&start); 
		switch(start){
			case 1: 
				cadastraFilme();
				break;
			case 2: 
				listarFilme();
				break;
			case 3:
				buscadorFilme();
				break;
			case 4:
				printf("Muito obrigado por utilizar meu programa!\n\n");
				break;
			default:
				printf("Escolha uma opção valida!\n");
				clear();
				break;
		}	
	}while(start!=4);
	
}


void cadastraFilme(){
	clear();
	//fazer uma validação para verificar se a pessoa já atingiu o limite de cadastro?
	int qtdMomento;
	printf("                           TELA DE CADASTRO\n\n");
	printf("Quantidade de filmes a ser cadastrada: ");
	scanf("%d",&qtdMomento);
	for(i=0;i < qtdMomento ;i++){
		printf("Codigo: ");
		scanf("%d",&filme[i].id);
		fflush(stdin);
		printf("Titulo: ");
		scanf("%s",&filme[i].title);
		fflush(stdin);
		printf("Nota: ");
		scanf("%f",&filme[i].note);
		fflush(stdin);
		printf("Duracao: ");
		scanf("%d",&filme[i].duration);
		fflush(stdin);
		separador();
	}
	
	if(i == qtdMomento){
		clear();
		telaPrincipal();
	}
	
}

void listarFilme(){
	//fazer o sistema para até a pessoa permitir que prossiga
	clear();
	printf("                           	FILMES CADASTRADOS\n\n");
	printf("\n\n");
		for(i=0;filme[i].id > 0;i++){
				printf("%d\n",filme[i].id);
				printf("Titulo: %s\n",filme[i].title);
				printf("Nota: %.2f\n",filme[i].note);
				printf("Duracao: %d",filme[i].duration);
				separador();
		}
		system("pause");
}


void buscadorFilme(){
	clear();
	int search;
	printf("                           	BUSCA POR FILME\n\n");
	printf("Insira o ID do filme cadastrado: ");
	scanf("%d", &search);
	for(i=0;i<MAXCADASTROS;i++){
		if(search == filme[i].id){
			printf("ID: %d\n",filme[i].id);
			printf("Titulo: %s\n",filme[i].title);
			printf("Nota: %.2f\n",filme[i].note);
			printf("Duracao: %d\n",filme[i].duration);
			break; 
		}else{
			printf("Registro nao encontrado\n\n");
			break;
		}	
	}
	system("pause");
}