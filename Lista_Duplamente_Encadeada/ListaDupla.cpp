#include "ListaDupla.h"
#include <iostream>

#define DEBUG 1

using namespace std;

ListaDupla::ListaDupla(){
    this->primeiro = nullptr;
    this->ultimo = nullptr;
    this->qtd = 0;
}

ListaDupla::~ListaDupla(){
    if(DEBUG) cout << "Destrutor executado" << endl;

    No* aux = this->primeiro; 

    while (aux != nullptr){
        aux = this->primeiro->prox;
        if(DEBUG) cout << this->primeiro->dado << " ";
        delete this->primeiro;
        this->primeiro = aux;
    }
   
}

void ListaDupla::imprimir(){
    cout << "[";
    No* aux = this->primeiro;
    while (aux != nullptr){
        cout << aux->dado;
        if (aux->prox != nullptr) cout << ",";
        aux = aux->prox;
    }
    cout << "]" << endl;
}

// void ListaDupla::imprimir(){
//     cout << "[";
//     No* aux = this->ultimo;
//     while (aux != nullptr){
//         cout << aux->dado;
//         if (aux->ant != nullptr) cout << ",";
//         aux = aux->ant;
//     }
//     cout << "]" << endl;
// }

bool ListaDupla::anexar(int elemento){
    No* novo = new No(elemento);

    // se a lista está vazia
    if (this->primeiro == nullptr){
        this->primeiro = novo;
    } else {
        this->ultimo->prox = novo;
        novo->ant = this->ultimo;   
    }

    this->ultimo = novo;
    this->qtd++;
    return true;
    
}

bool ListaDupla::inserir(int elemento, int posicao){
    if (posicao < 0)          return false;
    if (posicao > this->qtd)  return false;

    No* novo = new No(elemento);

    // Primeiro elemento
    if (this->primeiro == nullptr) {
        this->primeiro = novo;
        this->ultimo = novo;
        

    // Primeira posição
    } else if (posicao == 0){
        novo->prox = this->primeiro;
        this->primeiro->ant = novo;
        this->primeiro = novo;
       

    // Última posição
    } else if (posicao == this->qtd){
        this->ultimo->prox = novo;
        novo->ant = this->ultimo;
        this->ultimo = novo;
       

    // Inserção meio    
    } else {

        No* aux = this->primeiro;

        // Posiciona o aux na posicao a ser inserida
        for(int i=0; i < posicao; i++) aux = aux->prox;

        // Insercao do novo nó a esquerda do aux. 
        novo->prox = aux;
        novo->ant = aux->ant;
        aux->ant->prox = novo;
        aux->ant = novo;
    }

    this->qtd++;
    return true;


}