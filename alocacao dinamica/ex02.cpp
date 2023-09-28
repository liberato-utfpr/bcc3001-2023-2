#include <iostream>
using namespace std;

class Pessoa{

public:
    string nome;

    Pessoa(){
        cout << "Construtor foi chamado " << this->nome << endl;
    }
    Pessoa(string nome){
        this->nome = nome;
        cout << "Construtor foi chamado " << this->nome << endl;
    }

    ~Pessoa(){
        cout << "Destrutor foi chamado " << this->nome << endl;
    }
};

int main(){

    Pessoa p1("Jose");
    // p1.nome = "Jose";
    
    cout << p1.nome << endl;

    Pessoa* p2 = new Pessoa("Maria");
    // p2->nome = "Maria";
    cout << p2->nome << endl;

    delete p2;
}