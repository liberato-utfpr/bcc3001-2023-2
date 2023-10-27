

class ListaDupla{
    private:
        class No{
        public:
            int dado;
            No* prox;
            No* ant;

            No(int dado){                
                this->dado = dado;
                this->ant = nullptr;
                this->prox = nullptr;
            }

            No(int dado, No* ant, No* prox){
                this->dado = dado;
                this->ant = ant;
                this->prox = prox;
            }
        };

        int qtd;
        No* primeiro;
        No* ultimo;
    

    public:
        ListaDupla();    
        ~ListaDupla();    

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