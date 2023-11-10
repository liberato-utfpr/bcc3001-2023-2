#include <iostream>
using namespace std;



void troca(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;    
}

void bubble_sort (int* v, int n){
    int i, fim;
    for (fim=n-1; fim>0; fim--) {
        for (i=0; i<fim; i++){
            if (v[i] > v[i+1]){
                troca(v[i], v[i+1]);
            }
        }
    }
}

void selection_sort (int* v, int n){
    int fim, i, posMaior;
    for (fim=n-1; fim > 0; fim--) {
        posMaior = 0;
        for (i=1; i<=fim; i++){
            if (v[i] > v[posMaior]){
                posMaior = i;
            }
        }
        troca(v[posMaior], v[fim]);
    }
}

void insertion_sort (int* v, int n){
    int i,j;
    for(i=1; i<n; i++){
        int elemento = v[i];
        j = i - 1;
        while(j >= 0 && elemento < v[j]){
            v[j+1] = v[j];
            j--;        
        }
        v[j+1] = elemento;

    }

}


   