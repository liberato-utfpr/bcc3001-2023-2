#include <iostream>
using namespace std;



void f1_valor(int n){
    // printf("[f1] n (%u): %d\n", &n, n);
    n = n + 1;
}

void f2_ponteiro(int* n){
    // printf("[f2] n (%u): %d\n", &n, n);
   *n = *n + 1;
}

void f3_referencia(int& n){
    // printf("[f3] n (%u): %d\n", &n, n);
   n = n + 1;
}

int main(){

    int num1 = 100;
    int num2 = 200;
    int num3 = 300;


    f1_valor(num1);
    f2_ponteiro(&num2);
    f3_referencia(num3);

    printf("(%u) num1: %d\n", &num1, num1);
    printf("(%u) num2: %d\n", &num2, num2);
    printf("(%u) num3: %d\n", &num3, num3);

    f3_referencia(num1);
    printf("(%u) num1: %d\n", &num1, num1);
}