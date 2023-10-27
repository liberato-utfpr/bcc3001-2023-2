#include "ListaDupla.h"
#include <iostream>

using namespace std;

int main(){
    ListaEncadeada* lista = new ListaEncadeada();
    lista->anexar(10);
    lista->anexar(20);
    lista->anexar(30);
    lista->anexar(40);
    lista->imprimir();              // [10,20,30,40]


}