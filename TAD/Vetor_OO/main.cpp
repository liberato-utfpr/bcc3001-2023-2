
#include "Vetor.h"
#include <iostream>



int main(){
    // Vetor* v1 = vet_criar();
    Vetor* v1 = new Vetor();

    // vet_anexar(v1, 10);
    v1->anexar(10);
    v1->anexar(20);
    v1->anexar(30);


    // vet_imprimir(v1);
    v1->imprimir();
    
    Vetor v2;
    v2.anexar(40);
    v2.anexar(50);
    v2.anexar(60);
    v2.anexar(60);
    v2.anexar(60);
    v2.anexar(60);
    v2.imprimir();



    // Vetor v1;        //  []
    // v1.anexar(10);    // [10]
    // v1.anexar(20);    // [10,20]
    // v1.anexar(30);    // [10,20,30]
    // v1.inserir(5, 0); // [5,10,20,30]
    // v1.inserir(15, 2);// [5,10,15,20,30]

    // v1.substituir(0, 100); // [100,10,15,20,30]
    // v1.removerPorElemento(15); // 2  [100,10,20,30]

    // int elementoRemovido;

    // v1.removerPorPosicao(0, elementoRemovido);

    

    delete v1;

}