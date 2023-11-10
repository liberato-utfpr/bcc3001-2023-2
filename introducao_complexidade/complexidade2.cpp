#include <iostream>
#include <time.h>

using namespace std;

typedef unsigned long int Inteiro;

void executaCarga(int carga){
    for (int i=0; i < carga; i++);
}

void ordem_logN(Inteiro n, int carga){
    Inteiro i;

    while(n > 0){
        executaCarga(carga);
        n /= 2;
    }

}

void ordem_n(Inteiro n, int carga){    
    while(n > 0){
        executaCarga(carga);
        n--;
    }
}

void ordem_n2(Inteiro n, int carga){
    Inteiro i,j;
    for (i=0; i < n; i++){
        for (j=0; j < i; j++){
            executaCarga(carga);
        }
    }
}

void ordem_NlogN(Inteiro n, int carga){
    Inteiro i,j;
    for (i=0; i < n; i++){
       j = n;
       while(j > 0){
            executaCarga(carga);
            j = j / 2;
       }
        
    }
}

float medeTempo(Inteiro n, int carga, void (*pFuncao)(Inteiro,int)){
    clock_t inicio, fim;
    float tempo;
    
    inicio = clock();
    pFuncao(n, carga);
    fim = clock();
    
    // Calcula o tempo
    tempo = (float)(fim - inicio) / CLOCKS_PER_SEC;
    return tempo;
}

int main(){
    Inteiro n = 1000 * 20;
    int carga = 10;

    printf("n          :  %ld \n", n);
    printf("carga      :  %d \n", carga);
    printf("O(log n)   :  %.8f \n", medeTempo(n, carga, ordem_logN));
    printf("O(n)       :  %.8f \n", medeTempo(n, carga, ordem_n));
    printf("O(n log n) :  %.8f \n", medeTempo(n, carga, ordem_NlogN));
    printf("O(n2)      :  %.8f \n", medeTempo(n, carga, ordem_n2));
}
