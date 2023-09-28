#include <iostream>


typedef struct data{
    int dia;
    int mes;
    int ano;
} Data;


void preenche(Data* d, int dia, int mes, int ano){
    // (*d).dia = dia;
    d->dia = dia;
    d->mes = mes;
    d->ano = ano;
}

void imprime(Data* d){
    printf("%d/%d/%d\n", d->dia, d->mes, d->ano);
}

int main(){
    
    Data d1;
    preenche(&d1, 15, 9, 2023);
    imprime(&d1);
    
    Data d2;
    preenche(&d2, 1, 1, 2023);
    imprime(&d2);
}