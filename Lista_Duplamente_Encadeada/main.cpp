#include "ListaDupla.h"
#include <iostream>

using namespace std;


void teste_anexar(){
    ListaDupla* lista = new ListaDupla();

    lista->anexar(10);
    lista->anexar(20);
    lista->anexar(30);
    lista->anexar(40);
    lista->imprimir();              // [10,20,30,40]  

    delete lista;
}

void teste_inserir(){
    ListaDupla* lista = new ListaDupla();

    lista->inserir(20, 0);
    lista->imprimir();          // [20]
    lista->inserir(30, 1);
    lista->imprimir();          // [20,30]
    lista->inserir(10, 0);
    lista->imprimir();          // [10,20,30]
    lista->inserir(15, 1);
    lista->imprimir();          // [10,15,20,30]
    lista->inserir(25, 3);
    lista->imprimir();          // [10,15,20,25,30]

}



int main(){
    // teste_anexar();
    teste_inserir();
      
}