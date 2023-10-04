#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

typedef struct no{
    int dado;
    struct no* prox;
} No;

void imprimir(No* no){
    No* aux = no;
    while(aux != NULL){
        printf("%d\n", aux->dado);
        aux = aux->prox;
    }
}

void insereDireita(No* ref, No* novo){
    novo->prox = ref->prox;
    ref->prox = novo;
}

int main(){
    
    No* n1 = (No*) malloc(sizeof(No));
    No* n2 = (No*) malloc(sizeof(No));
    No* n3 = (No*) malloc(sizeof(No));

    n1->dado = 1;
    n2->dado = 2;
    n3->dado = 3;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = NULL;

    n3->prox = (No*) malloc(sizeof(No));
    No* aux; 
    aux = n3->prox;
    aux->dado = 4;
    aux->prox = NULL;

    No* novo = (No*)malloc(sizeof(No));
    novo->dado = 500;
    insereDireita(n1, novo);

    novo = (No*)malloc(sizeof(No));
    novo->dado = 1000;
    insereDireita(n3, novo);
    
    novo = (No*)malloc(sizeof(No));
    novo->dado = 2000;
    insereDireita(aux, novo);

    


    imprimir(n1);
    
   
    
    

    return 0;
}