#include <iostream>
using namespace std;


int main(){
    string nome1 = "Mateus";
    string nome2("Marcos");
    string nome3;
    nome3 = "Joao";

    nome3 = nome3 + " Pedro";
    nome3.append(" da Silva");
    

    cout << nome1[0] << " - " << nome1.size() << endl;
    cout << nome2.at(2) << " - " << nome2.size() << endl;
    cout << nome3 << " - " << nome3.size() << endl;

    string nome4 = nome3.substr(0,nome3.size()) + " -----";
    cout << nome4 << " - " << nome4.size() << endl;
    
    nome3 = "Maria";
    cout << nome3 << " - " << nome3.size() << endl;


    
    
    




    
    // char nome[10] = "Jose";
    // printf("%s\n", nome);

    // strcpy(nome, "Maria");
    // printf("%s\n", nome);

    // strcat(nome, " Cardoso");
    // printf("%s\n", nome);
    // strlen(nome);

   
}