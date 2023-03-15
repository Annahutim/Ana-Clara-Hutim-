#include <stdio.h>   // Biblioteca informacao para aluno//
#include <stdlib.h> //biblioteca alocacao espaco de memoria//
#include <locale.h> //biblioteca regional//
#include <string.h> //biblioteca responsavel por string//

int main(){
	
	int opcao=0; // definindo as variaveis//	
	int x=1; 
	for(x=1;x=1;)
	{
	 system("cls");
	
	 setlocale(LC_ALL,"Portuguese");//definindo a linguagem//
	
	 printf("### Cartorio da EBAC### \n\n");//inicio menu//
	 printf("Escolha a opcão desejada do menu \n\n");
	 printf("\t1- Registrar nomes \n");
	 printf("\t2-Consultar nomes \n");
	 printf("\t3- Deletar nomes \n"); //fim do menu//
	 printf("Opção : ");
	
	 scanf("%d", &opcao); // armazenando escolha do usuario//
	
	 system("cls");
	 
int registro() // funcao para cadastrar usuarios//
{
	  //inicio de criaçao de variaveis//
      char arquivo[40];
      char cpf[40];
      char nome[40];
      char sobrenome[40];
      char cargo [40];
       // final de variaveis//
 
     printf("Digite o CPF a ser cadastrado :"); //coletando informacoes
     scanf("%s", cpf); // %s reference a strings
     strcpy(arquivo,cpf); // responsavel por copiar os valores string//
 
     FILE*file; // criar arquivo
     file= fopen(arquivo, "w");//abrindo o arquivo
     fprintf(file,cpf);// salva valor da variavel
     fclose(file);// fecha arquivo
 
     file=fopen(arquivo,"a");//criando arquivo
     printf(file,",");//abrindo arquivo
     fclose(file);//fecha arquivo
 
     printf("Digite o nome a ser cadastrado :"); //coletando nome
     scanf("%s",nome);//lendo
 
 
     file=fopen(arquivo,"a");//criando o arquivo
     fprintf(file,nome);//salvando valor arquivo variavel//
     fclose(file);//fechando arquivo
 
     file=fopen(arquivo,"a");//abrir arquivo
     fprintf(file,",");//lendo arquivo
     fclose(file);//fechando arquivo
 
     printf("Digite o sobrenome a ser cadastrado: ");//coletando informacoes
     scanf("%s", sobrenome);//lendo informacoes dadas com %s quer dizer strings
 
     file=fopen(arquivo,"a");//abrindo arquivo variavel
     fprintf(file,sobrenome);//lendo oque ja foi dado
     fclose(file);//fechando arquivo
 
     file=fopen(arquivo,"a");//abrindo arquivo
     fprintf(file,",");//lendo arquivo
     fclose(file);//fechando arquivo
 
     printf("Digite o cargo a ser cadastrado : ");// coletando informacoes
     scanf("%s", cargo);//lendo informacoes dadas + %s quer dizer strings
 
     file=fopen(arquivo,"a");//abrindo arquivo
     fprintf(file,cargo);//lendo arquivo 
     fclose(file);//fechando arquivo
 
     file=fopen(arquivo,"a");//abrindo arquivo
     fprintf(file,",");//lendo arquivo
     fclose(file);//fechando arquivo
 
 system("pause");
}
int consultar()
{
	setlocale(LC_ALL,"Portuguese");// pq colocamos acento tem que usar isso sempre
	  //inciando variaveis
	char cpf[40];
	char conteudo[200];
	//fechando variaveis
	printf("Digite o cpf a ser consultado:");//coletando informacoes
	scanf("%s", cpf);//lendo oque foi pedido
	
	FILE*file;// biblioteca 
	file=fopen(cpf,"r");//abrindo arquivo r quer dizer ler
	
	if(file==NULL)
	{
		printf("Não foi possivél abrir o arquivo, cpf nao encontrado. \n");
	}
	while(fgets(conteudo,200,file) != NULL)// while quer dizer enquanto (laco de repeticao)//
	{
		printf("\nEssas são as informações do usuario:");
		printf("%s",conteudo);
		printf("\n\n");
	}
	system("pause");
}
int deletar()
{
		char cpf[40];
		
		printf("Digite o cpf a ser deletado : ");
		scanf("%s",cpf);
		
		remove(cpf);// remove o q foi pedido 
		
		FILE*file;
		file=fopen(cpf,"r");//abrindo arquivo
		
		if(file==NULL)// se
		{
			printf("Usuario não se encontra no sistema \n");
			system("pause");
		}
} 
	 
	 switch(opcao)
	 {
	 	case 1:
	 	registro();
		break;
		
		case 2:
		consultar();
		break;
		
		case 3:
	    deletar();
		break;
		
		
		default:
		printf("Essa opcao não està disponivél.\n");//fim da selecao//
		system("pause");
		break;
	 
	
}
}
	}
