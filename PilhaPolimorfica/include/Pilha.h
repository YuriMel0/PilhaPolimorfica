#ifndef PILHA_H
#define PILHA_H
#include <string>
using std::string;

using namespace std;

template < typename T >
struct No {
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
        No<T> *NoTopo;
    private:
};

#endif // PILHA_H
