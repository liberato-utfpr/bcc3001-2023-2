

class ListaEncadeada{
    private:
        class No{
        public:
            int dado;
            No* prox;

            No(int dado){
                this->dado = dado;
            }

            No(int dado, No* prox){
                this->dado = dado;
                this->prox = prox;
            }
        };

        int qtd;
        No* primeiro;
        No* ultimo;
    

    public:
        ListaEncadeada();    
        ~ListaEncadeada();    

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