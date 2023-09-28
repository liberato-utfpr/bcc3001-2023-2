
#include <iostream>
#include <string.h>
using namespace std;


class Pessoa {
 
public:

    char nome[100];
    int idade;

    Pessoa(){
        cout << "Construtor foi chamado "<< this <<endl;
    }

    Pessoa(int idade){
        this->idade = idade;
        cout << "Construtor foi chamado "<< this->idade <<endl;
    }

    ~Pessoa(){
        cout << "Destrutor foi chamado " << this << endl;
    }
};

int main(){
    Pessoa p1(25);
    Pessoa p2(50);

    return 0;
}

