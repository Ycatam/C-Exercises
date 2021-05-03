/*
 ============================================================================
 Name        : Prompt.c
 Author      : Rafael Ribeiro
 Version     : 1.1
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void print_entry(char *entry) {
	printf("You entered: %s\n", entry);
}

struct Node{
 int num;
 struct Node *prox;
}; 
typedef struct Node node;


int tam;

void inicia(node *LISTA);
node *criaNo();
void insereInicio(node *LISTA);
void exibe(node *LISTA);
void libera(node *LISTA);
node *retiraInicio(node *LISTA);
node *retira(node *LISTA);

int main(int argc, char *argv[]) {
	char input[201];
  
    node *LISTA = (node *) malloc(sizeof(node));
        if(!LISTA){
        printf("Sem memoria disponivel!\n");
        exit(1);
        }else{
        inicia(LISTA);
    
    node *tmp;
   
	while(1) {
		printf("prompt> ");
		if (fgets(input, 200, stdin) == NULL) {
			printf("An error ocurred.\n");
			break;
		}

        if (strncmp(input, "put\n", 3) == 0) {
			printf("Digite o valor do numero novo:\n");
            insereInicio(LISTA);
            exibe(LISTA);
			
		} 

        if (strncmp(input, "clear\n", 5) == 0) {
			libera(LISTA);
            inicia(LISTA);
			
		}
      
        if (strncmp(input, "remove\n", 6) == 0) {
			tmp= retira(LISTA);
            printf("Retirado: %3d\n\n", tmp->num);
			
		}
      
		if (strncmp(input, "exit\n", 5) == 0) {
			printf("Leaving. Good bye.\n");
			break;
		}

		print_entry(input);
	}

	return EXIT_SUCCESS;
}
}  
node *aloca()
{
 node *novo=(node *) malloc(sizeof(node));
 if(!novo){
  printf("Sem memoria disponivel!\n");
  exit(1);
 }else{
  scanf("%d", &novo->num);
  return novo;
 }
}

int vazia(node *LISTA)
{
 if(LISTA->prox == NULL)
  return 1;
 else
  return 0;
}

void inicia(node *LISTA)
{
 LISTA->prox = NULL;
 tam=0;
}

void insereInicio(node *LISTA)
{
 node *novo=aloca(); 
 node *oldHead = LISTA->prox;
 
 LISTA->prox = novo;
 novo->prox = oldHead;
 
 tam++;
}

void insereFim(node *LISTA)
{
 node *novo=aloca();
 novo->prox = NULL;
 
 if(vazia(LISTA))
  LISTA->prox=novo;
 else{
  node *tmp = LISTA->prox;
  
  while(tmp->prox != NULL)
   tmp = tmp->prox;
  
  tmp->prox = novo;
 }
 tam++;
}

void exibe(node *LISTA)
{
 //system("clear");
 if(vazia(LISTA)){
  printf("Lista vazia!\n\n");
  return ;
 }
  node *tmp;
 tmp = LISTA->prox;
 printf("Lista:");
 while( tmp != NULL){
  printf("%5d", tmp->num);
  tmp = tmp->prox;
 }
  printf("\n\n");
}

node *retiraInicio(node *LISTA)
{
 if(LISTA->prox == NULL){
  printf("Lista ja esta vazia\n");
  return NULL;
 }else{
  node *tmp = LISTA->prox;
  LISTA->prox = tmp->prox;
  tam--;
  return tmp;
     }
 }

void libera(node *LISTA)
{
 if(!vazia(LISTA)){
  node *proxNode,
     *atual;
  
  atual = LISTA->prox;
  while(atual != NULL){
   proxNode = atual->prox;
   free(atual);
   atual = proxNode;
  }
 }
}

node *retira(node *LISTA)
{
 int opt,
  count;
 printf("Que posicao, [de 1 ate %d] voce deseja retirar: ", tam);
 scanf("%d", &opt);
 
 if(opt>0 && opt <= tam){
  if(opt==1)
   return retiraInicio(LISTA);
  else{
   node *atual = LISTA->prox,
     *anterior=LISTA; 
     
   for(count=1 ; count < opt ; count++){
    anterior=atual;
    atual=atual->prox;
   }
   
  anterior->prox=atual->prox;
  tam--;
  return atual;
  }
   
 }else{
  printf("Elemento invalido\n\n");
  return NULL;
 }
}
