#include <stdio.h> //biblioteca de comunica��o com o usuario
#include <stdlib.h> //biblioteca de alca��es de espa�o em mem�ria
#include <locale.h> //biblioteca de alca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro()
{
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
	
		printf("Digite o seu CPF ao ser cadastrado: ");
		scanf("%s", cpf);
		
		strcpy(arquivo, cpf); // respons�vel por copiar os valores da string
	
		FILE *file; // ciar o arquivo
		file = fopen(arquivo, "w"); // se usar-se "w" para vcriar um novo arquivo.
		fprintf(file,cpf); // para salvar o valor da variavel
		fclose(file); // para fechar o file ou arquivo 
		
		file = fopen(arquivo, "a"); // usa-se a letra "a" para atualizar o arquivo 
		fprintf(file, ","); // usa-se o "," para separar as variavel
		fclose(file);
		
		printf("digite o seu nome para ser cadastrado: ");
		scanf("%s", nome);
		

		file = fopen(arquivo, "a");
		fprintf(file,nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file, ",");
		fclose(file);
		
		printf("digite o seu sobrenome para ser cadastrado: ");
		scanf("%s", sobrenome);		
		
		file = fopen(arquivo, "a");
		fprintf(file,sobrenome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("digite sua cargo para ser cadastrado: ");
		scanf("%s",cargo);
		 
		file = fopen(arquivo, "a");
		fprintf(file,cargo);
		fclose(file); 
	
		
}
int consultar()
{
		setlocale(LC_ALL, "Portuguese");
		
		char cpf[40];
		char conteudo[200];
		
		printf("Digite seu CPF por gentileza: \n");
		scanf("%s",cpf);
		
		FILE *file;
		file = fopen(cpf,"r"); // coloca-se a letra R para se ler o arquivo
		
		if(file == NULL)
		{
			printf("N�o foi poss�vel encontrar esse arquivo.\n");		
		}
		
		while(fgets(conteudo, 200, file) != NULL)
		{
			printf("\nEssas s�o as informa��es do usu�rio: \n");
			printf("%s", conteudo);
			printf("\n\n");
		}
		
		system("pause");
}
int deletar()
{
		setlocale(LC_ALL, "Portuguese");

		char cpf[40];
		
		printf("Por gentileza digite o CPF para ser deletado: \n");
		scanf("%s",cpf);
		FILE *file;

  		file = fopen(cpf, "r"); // Tenta abrir o arquivo para leitura

		if (file == NULL) 
		{

    	printf("O usu�rio n�o existe!\n");

    	system("pause");

  		} 

		else 

  		{

    	fclose(file); // Fecha o arquivo, pois ele existe

    	remove(cpf); // Agora voc� pode remover o arquivo

    	printf("Usu�rio deletado!\n");

    	system("pause");

  		}
		
		
		
		
		
		
		
		
		
		
		
}
int main()
{
	
		int opcao=0; //definindo variaveis
		int laco=1;
		
		for(laco=1;laco=1;) ///tem como afiniddade de fazer efeito vai e volta kkk
		{
		
		system("cls");
		
		
		setlocale(LC_ALL, "Portuguese"); //definindo linguagens
		
		printf("### Cart�rio dda EBAC ###\n\n"); //�nicio do menu
		printf("Escolha a op��o desejada do menu:\n\n");
		printf("\t1 -registrar nomes\n");
		printf("\t2 -consultar nomes\n");
		printf("\t3 -deletar nomes\n");
		printf("Op��o: "); //fim do menu
		
		scanf("%d", &opcao); //armanezamento a escolha do us�ario 
		
		system("cls");//para limpar a tela 
		
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
			printf(" est� op��o est� indisponivel\n");
			system("pause");
			break;
			
		}	
		
		
		
			
		
		
		}
		
}
