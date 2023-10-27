#include "ListaEncadeada.h"
#include <iostream>

using namespace std;

int main(){
    ListaEncadeada* lista = new ListaEncadeada();
    lista->anexar(10);
    lista->anexar(20);
    lista->anexar(30);
    lista->anexar(40);
    lista->imprimir();              // [10,20,30,40]

   


    
    // cout << lista->removerPorElemento(100) << endl;

    lista->removerPorElemento(30);
    lista->imprimir();              // [10,20,40]
    lista->removerPorElemento(10);
    lista->imprimir();              // [20,40]
    lista->removerPorElemento(40);
    lista->imprimir();              // [20]
    lista->removerPorElemento(20);
    lista->imprimir();              // []

    



}