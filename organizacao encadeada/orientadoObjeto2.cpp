
#include <iostream>

using namespace std;

class No{
public:
    int dado;
    No* prox;

    No(int dado){
        this->dado = dado;
    }

    No(int dado, No* prox){
        this->dado = dado;
        this->prox = prox;
    }
};

void imprimir(No* no){
    No* aux = no;
    while(aux != nullptr){
        cout << aux->dado << endl;
        aux = aux->prox;
    }
}

void insereDireita(No* ref, No* novo){
    novo->prox = ref->prox;
    ref->prox = novo;
}

int main(){
    No* n1 = new No(1);
    No* n2 = new No(2);
    No* n3 = new No(3);

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = nullptr;

    n3->prox = new No(4, nullptr);

    No* novo = new No(500);
    insereDireita(n1, novo);

    novo = new No(1000);
    insereDireita(n3, novo);
    
    

    imprimir(n1);

    
}