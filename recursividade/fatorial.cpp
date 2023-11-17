#include <iostream>

using namespace std;

int fatorial(int n){
    int fat = 1;
    while (n > 0){
        fat = fat * n;
        n--;
    }
    return fat;
}


int fatorialRecursivo(int n){
    if (n==1) return 1;

    return n * fatorialRecursivo(n-1);
}



int main(){
    
    int total = 0;
    // total = fatorial(5);

    total = fatorialRecursivo(6);
    cout << total << endl;


}