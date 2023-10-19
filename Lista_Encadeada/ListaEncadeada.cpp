#include "ListaEncadeada.h"
#include <iostream>

using namespace std;

ListaEncadeada::ListaEncadeada(){
    this->qtd = 0;
    this->primeiro = nullptr;
    this->ultimo = nullptr;
}
ListaEncadeada::~ListaEncadeada(){

}

bool ListaEncadeada::anexar(int elemento){
    No* novo = new No(elemento, nullptr);
    if (this->primeiro == nullptr){
        this->primeiro = novo;
    } else {
        this->ultimo->prox = novo;    
    }
    this->ultimo = novo;
    this->qtd++;
}

void ListaEncadeada::imprimir(){
    cout << "[";
    No* aux = this->primeiro;
    while (aux != nullptr){
        cout << aux->dado;
        if (aux->prox != nullptr) cout << ",";
        aux = aux->prox;
    }
    cout << "]" << endl;
}