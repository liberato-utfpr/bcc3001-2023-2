#include "Vetor.h"
#include <iostream>
using namespace std;
#define DEBUG 0

const int TAM = 5;




Vetor::Vetor(){
    this->vet = new int[TAM];
    this->tam = TAM;
    this->qtd = 0;
    if (DEBUG) cout << "CONSTRUTOR executado" << endl;
}    

Vetor::~Vetor(){
    if (DEBUG) cout << "destrutor executado " << this << endl;
    delete this->vet;
}

bool Vetor::anexar(int elemento){
    if (this->qtd == this->tam){
        int* vetAux = new int[this->tam * 2];
        
        for (int i=0; i<this->qtd; i++){
            vetAux[i] = this->vet[i];
        }

        delete this->vet;
        this->vet = vetAux;
        this->tam *= 2;
    }

    vet[qtd++] = elemento;
    return true;
}


void Vetor::imprimir(){
    cout << "[";
    for (int i=0; i < this->qtd; i++){
        cout << this->vet[i];
        if (i < this->qtd - 1) cout << ",";
    }
    cout << "]" << endl;
}



