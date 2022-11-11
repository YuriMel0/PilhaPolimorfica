#ifndef PILHA_H
#define PILHA_H
#include <string>
using std::string;

using namespace std;

template < typename T >
class No {
    T dado;
    No<T> *proximo;

    No(T dadoInserir)
    {
        dado = dadoInserir;
        proximo = nullptr;
    }
};

template < typename T >
class Pilha
{
    public:
        Pilha();
        virtual ~Pilha();
        bool pilhaVazia();
        bool pilhaCheia();
        void inserir(T dadoInserir);
        T remover();
        void imprimir();

    protected:

    private:
        No<T> *NoTopo;
};

#endif // PILHA_H
