

class Vetor{
    private:
        int* vet;
        int tam;
        int qtd;
    
    void verificaAumenta();

    public:
        Vetor();    
        ~Vetor();    

        bool anexar(int elemento);
        bool inserir(int elemento, int posicao);
        bool substituir(int posicao, int elemento);
        int removerPorElemento(int elemento);
        bool removerPorPosicao(int posicao, int &removido);
        int tamanho();
        int buscarPorElemento(int elemento);
        int buscarPorPosicao(int posicao);
        void imprimir();

};