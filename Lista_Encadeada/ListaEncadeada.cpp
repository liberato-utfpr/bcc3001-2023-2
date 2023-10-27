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
    return true;
}


int ListaEncadeada::removerPorElemento(int elemento){
    if (this->qtd == 1){
        
        No* noRemovido = this->primeiro;
        this->primeiro = nullptr;
        this->ultimo = nullptr;
        delete noRemovido;
        this->qtd--;
        return 0;

    }else if (this->primeiro->dado == elemento){ // Remoção na primeira posição
        
        No* noRemovido = this->primeiro;
        this->primeiro = this->primeiro->prox;
        
        delete noRemovido;
        this->qtd--;
        return 0;
        
    } else if (this->ultimo->dado == elemento){ // remoção da última posição
        No* aux = this->primeiro;
        
        // Leva o aux até o último elemento
        for (int i=0; i < this->qtd-2; i++)
            aux = aux->prox;
        
        // atualiza o this->ultimo com o endereço do penúltimo elemento
        this->ultimo = aux;
        // Atualiza o aux para o elemento a ser removido
        aux = aux->prox;

        this->ultimo->prox = nullptr;
        // Levando o aux para o último elemento
    
        delete aux;
        this->qtd--;
        return this->qtd;


        

        
    } else {        
        No* aux = this->primeiro;
        int posicao = 1;

        while (aux->prox != nullptr){
            No* sucessor = aux->prox;

            if (sucessor->dado == elemento){
                aux->prox = sucessor->prox;
                // aux->prox = aux->prox->prox;
                delete sucessor;
                this->qtd--;
                return posicao;
            }
            aux = aux->prox;
            posicao++;
        }
        
        return -1;
    }


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