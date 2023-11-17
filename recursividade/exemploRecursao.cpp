#include <iostream>

using namespace std;

void contagem(int n){
    int i = 1;
    while (i <= n){
        cout << i << " ";
        i++;
    }
}


// void contagemRecursiva(int n){
//     // Caso base
//     if (n == 0) return;
    
//     // Passo de recursão
//     cout << n << " ";
//     contagemRecursiva(n-1);
// }

void contagemRecursiva(int n){
    if (n == 0) return;
    
    contagemRecursiva(n-1);
    cout << n << " ";
}



int main(){
    int n = 10;
    // contagem(n); // 10 9 8 ... 1

    contagemRecursiva(n);

}