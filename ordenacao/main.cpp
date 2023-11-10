#include <iostream>
#include "ordenacaoSimples.cpp"

using namespace std;

void printVetor(int* v, int tam){
    int i;
    printf("[");
    for(i = 0; i < tam; i++){
        printf("%d", v[i]);
        if(i < tam-1) printf(",");
    }
    printf("]\n");
}

int main(){
    int v1[] = {5,65, 8, 23, 1, 15};
    printVetor(v1, 6);
    
    selection_sort(v1, 6);
    // insertion_sort(v1, 6);
    // bubble_sort(v1, 6);
    printVetor(v1, 6);



}