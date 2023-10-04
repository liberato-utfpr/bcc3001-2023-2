
#include <iostream>

using namespace std;

class No{
public:
    int dado;
    No* prox;
};

void imprimir(No* no){
    No* aux = no;
    while(aux != nullptr){
        cout << aux->dado << endl;
        aux = aux->prox;
    }
}

int main(){
    No* n1 = new No;
    No* n2 = new No;
    No* n3 = new No;

    n1->dado = 1;
    n2->dado = 2;
    n3->dado = 3;

    n1->prox = n2;
    n2->prox = n3;
    n3->prox = nullptr;

    n3->prox = new No;
    No* aux; 
    aux = n3->prox;
    aux->dado = 4;
    aux->prox = nullptr;

    imprimir(n1);

    
}