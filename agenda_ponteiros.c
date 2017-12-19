/*

Atividade avaliativa 1
Agenda Ponteiros

Patrick Garcia - SSI

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

typedef struct {
    int dia;
    int mes;
    int ano;
} Data;

typedef struct {
    char rua[MAX];
    int numero;
    char cidade[MAX];
    char pais[50];
} Endereco;

typedef struct {
    int ddd;
    int telefone;
} Telefone;


typedef struct {
	char nome[MAX];
	char email[MAX];
	Endereco end;
	Telefone tel;
	Data nasc;
 } agenda;

 agenda* cadastrar() {
		agenda* novoRegistro = malloc(sizeof (agenda));
	 	printf("\n\tDigite o nome -> ");
		scanf("%s", novoRegistro->nome);
	 	printf("\n\tDigite o email -> ");
		scanf("%s", novoRegistro->email);
		printf("\n\tDigite o ende...");
			printf("\nRua -> ");
			scanf("%s", novoRegistro->end.rua);
			printf("\nNum -> ");
			scanf("%d", &novoRegistro->end.numero);
			printf("\nCidade -> ");
			scanf("%s", novoRegistro->end.cidade);
			printf("\nPais-> ");
			scanf("%s", novoRegistro->end.pais);
		printf("\n\tDigite o telefone... ");
			printf("\n->DDD-> ");
			scanf("%d", &novoRegistro->tel.ddd);
			printf("\n->Telefone-> ");
			scanf("%d", &novoRegistro->tel.telefone);
		printf("\n\tData de nascimento (dd/mm/aa): ");
			printf("\nDia-> ");
			scanf("%d", &novoRegistro->nasc.dia);
			printf("\nMes-> ");
			scanf("%d", &novoRegistro->nasc.mes);
			printf("\nAno-> ");
			scanf("%d", &novoRegistro->nasc.ano);
		
return novoRegistro;
 }

void pesquisarPrimeiroNome(agenda* ptr2[]) {
int i,j, achou = 0;
char nome[50];

printf("\n\tDigite o nome a ser pesquisado: ");
scanf("%s", nome);

for ( i = 0; i < MAX; i++) {
	if (ptr2[i] != NULL) {
		if (strcmp(nome, ptr2[i]->nome) == 0) {
						for(j=0; j < MAX; j++){

				printf("\n\n\t-----> %s", ptr2[i]->nome);
				printf("\n\n\tEmail.......: %s", ptr2[i]->email);
				printf("\n\n\tEnd.......: %s / %d / %s / %s", ptr2[i]->end.rua, &ptr2[i]->end.numero, ptr2[i]->end.cidade, ptr2[i]->end.pais);
				printf("\n\n\tTelefone.......:  %d - %d", ptr2[i]->tel.ddd, ptr2[i]->tel.telefone);
				printf("\n\n\tData nascimento : %d / %d / %d ", ptr2[i]->nasc.dia, ptr2[i]->nasc.mes, ptr2[i]->nasc.ano);
				printf("\n\n");
			achou = 1;
			break;
		}
		 }
	 }
 }

if (achou == 0) {
 	printf("\n\tCadastro nao encontrado!");
}	
 
} 

void pesquisarMesAniver(agenda* ptr2[]) {
int i,j, achou = 0;
int mes;

printf("\n\tDigite o mes: ");
scanf("%d", &mes);

for ( i = 0; i < MAX; i++) {
	if (ptr2[i] != NULL) {
		if (mes == ptr2[i]->nasc.mes ) {
			for(j=0; j < MAX; j++){
			
				printf("\n\n\t-----> %s", ptr2[i]->nome);
				printf("\n\n\tEmail.......: %s", ptr2[i]->email);
				printf("\n\n\tEnd.......: %s / %d / %s / %s", ptr2[i]->end.rua, ptr2[i]->end.numero, ptr2[i]->end.cidade, ptr2[i]->end.pais);
				printf("\n\n\tTelefone.......:  %d - %d", ptr2[i]->tel.ddd, ptr2[i]->tel.telefone);
				printf("\n\n\tData nascimento : %d / %d / %d ", ptr2[i]->nasc.dia, ptr2[i]->nasc.mes, ptr2[i]->nasc.ano);
				printf("\n\n");
			achou = 1;
			break;
			}
		 }
	 }
 }

if (achou == 0) {
 	printf("\n\tCadastro nao encontrado!");
}	
 
} 
 
void pesquisarDiaMesAniver(agenda* ptr2[]) {
int i,j, achou = 0;
int mes, dia;

printf("\n\tDigite o dia: ");
scanf("%d", &dia);
printf("\n\tDigite o mes: ");
scanf("%d", &mes);

for ( i = 0; i < MAX; i++) {
	if (ptr2[i] != NULL) {
		if (dia == ptr2[i]->nasc.dia &&  mes == ptr2[i]->nasc.mes) {
						for(j=0; j < MAX; j++){

				printf("\n\n\t-----> %s", ptr2[i]->nome);
				printf("\n\n\tEmail.......: %s", ptr2[i]->email);
				printf("\n\n\tEnd.......: %s / %d / %s / %s", ptr2[i]->end.rua, ptr2[i]->end.numero, ptr2[i]->end.cidade, ptr2[i]->end.pais);
				printf("\n\n\tTelefone.......:  %d - %d", ptr2[i]->tel.ddd, ptr2[i]->tel.telefone);
				printf("\n\n\tData nascimento : %d / %d / %d ", ptr2[i]->nasc.dia, ptr2[i]->nasc.mes, ptr2[i]->nasc.ano);
				printf("\n\n");
			achou = 1;
			break;
		}
		 }
	 }
 }

if (achou == 0) {
 	printf("\n\tCadastro nao encontrado!");
}	
 
} 
  
 
 // Imprimir todo os dados
void listarDados(agenda* ptr2[]){
 	int i;
int achou = 0;

for ( i = 0; i < MAX; i++) {
if (ptr2[i] != NULL) {
	printf("\n\n\t-----> %s", ptr2[i]->nome);
	printf("\n\n\tEmail.......: %s", ptr2[i]->email);
	printf("\n\n\tEnd.......: %s / %d / %s / %s", ptr2[i]->end.rua, ptr2[i]->end.numero, ptr2[i]->end.cidade, ptr2[i]->end.pais);
	printf("\n\n\tTelefone.......:  %d - %d", ptr2[i]->tel.ddd, ptr2[i]->tel.telefone);
	printf("\n\n\tData nascimento : %d / %d / %d ", ptr2[i]->nasc.dia, ptr2[i]->nasc.mes, ptr2[i]->nasc.ano);
	printf("\n\n");
	achou=1;
 }
 }
 if (achou == 0) {
 	printf("\n\tNao ha cadastros!");
 }
 }
 
  // Imprimir nome, email e tel
 void listarSimples(agenda* ptr2[]){
 	int i;
int achou = 0;
 for ( i = 0; i < MAX; i++) {
 if (ptr2[i] != NULL) {
	printf("\n\n\t-----> %s", ptr2[i]->nome);
	printf("\n\n\tEmail.......: %s", ptr2[i]->email);
	printf("\n\n\tTelefone.......:  %d - %d", &ptr2[i]->tel.ddd, &ptr2[i]->tel.telefone);
	printf("\n\n");
	achou=1;
 }
 }
 if (achou == 0) {
 printf("\n\tN�O H� CADASTROS!");
 }
 }
 

 void inicializaArray(agenda* ptr2[]) {
 	int i;
 for ( i = 0; i < MAX; i++) {
 ptr2[i] = NULL;
 }
 }

 int main(int argc, char** argv) {

 agenda * at_ptr[MAX];

 inicializaArray(at_ptr);

 int op;
 do {
	 printf("\n*** Agenda ***\n") ;
	
	 printf("\n  1-Cadastrar\n  2-Editar\n  3-Pesquisar por primeiro nome\n  4- Busca por mes de aniversario\n  5-busca por dia e mes de aniversario\n  6-retira pessoa\n  7-Listar contatos\n  8-Listar email e tel do contato\n 0-Sair\n\n ");
	 printf("Digite a op...");
	 scanf("%d", &op);
	 switch (op) {
	 case 1:
		 printf("\n*****\t* Cadastro de contato *\t***\n");
		 int i;
		 for (i = 0; i < MAX; i++) {
			if (at_ptr[i] == NULL) {
				at_ptr[i] = cadastrar();
				break;
	 		}
	 }
	 if (i == MAX) {
	 printf("\n\n\tLimite maximo!!!	!!!\n\n");
	 }
	 break;
	 
	case 3:
		printf("\n\t\t*** PESQUISAR POR NOME ***\n");
		pesquisarPrimeiroNome(at_ptr);
	break;
	case 4:
		printf("\n\t\t*** Buscar por mes de aniversario ***\n");
		pesquisarMesAniver(at_ptr);
	break;
	case 5:
		printf("\n\t\t*** Buscar por dia e mes ***\n");
		pesquisarDiaMesAniver(at_ptr);
	break;
	/*case 6:
		printf("\n\t\t*** Insere ordenado ***\n");
		pesquisarDiaMesAniver(at_ptr);
	break;
	 */
	 case 7:
		 printf("\n\t LISTAR CONTATOS ****\n");
		 listarDados(at_ptr);
	 break;
	  case 8:
		 printf("\n\tLISTAR Nome, email e tel da agenda **\n");
		 listarSimples(at_ptr);
	 break;
	 default:
	 printf("\n\n\tOp invalida");
	 }
 } while (op != 0);
 
 printf("\n\n\t Patrick Garcia");
 return (EXIT_SUCCESS);
 }

