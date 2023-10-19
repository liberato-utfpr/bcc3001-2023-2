#include "ListaEncadeada.h"
#include <iostream>

using namespace std;

int main(){
    ListaEncadeada* lista = new ListaEncadeada();
    lista->anexar(50);
    lista->anexar(60);
    lista->anexar(70);
    lista->imprimir(); // [50,60,70]

}