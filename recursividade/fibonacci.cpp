#include <iostream>

using namespace std;

int fibo_iterativo(int n){
    int n1 = 1;
    int n2 = 1;
    int res = 1;
    
    int cont = 3;    
    while(cont <= n){
        res = n1 + n2;
        n1 = n2;
        n2 = res;
        cont++;
    }
    return res;
}

int fibo_recursivo(int n){
    if (n <= 2) return 1;
    return fibo_recursivo(n-1) + fibo_recursivo(n-2);
}


int main(){

int n = 9;

// cout << fibo_iterativo(n) << endl; // 21
cout << fibo_recursivo(n) << endl; // 21



}


