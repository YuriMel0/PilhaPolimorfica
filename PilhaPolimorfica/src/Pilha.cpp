#include "Pilha.h"
#include <string>
#include <iostream>

using namespace std;

template < typename T >
Pilha<T>::Pilha()
{
    NoTopo = nullptr;
}

template < typename T >
Pilha<T>::~Pilha()
{
    No<T> *aux;
    while (aux != nullptr){
        aux = NoTopo;
        NoTopo = NoTopo->proximo;
        delete aux;
    }
}

template < typename T >
bool Pilha<T>::pilhaVazia()
{
    return (NoTopo == nullptr);
}

template < typename T >
bool Pilha<T>::pilhaCheia()
{
    No<T> *NovoNo;
    try
    {
        NovoNo = new No<T>;
        delete NovoNo;
        return false;
    }
    catch(bad_alloc exception)
    {
        return true;
    }
}

template < typename T >
void Pilha<T>::inserir(T dadoInserir)
{
    if (pilhaCheia())
    {
        cout << "Pilha cheia [Overflow]" << endl;
        cout << "Nao foi possivel inserir o dado!" << endl;
    } else {
        No<T> *NovoNo = new No<T>;
        NovoNo->dado = dadoInserir;
        NovoNo->proximo = NoTopo;
        NoTopo = NovoNo;
    }
}

template < typename T >
T Pilha<T>::remover()
{
    if (pilhaVazia())
    {
        cout << "Pilha vazia [underflow]" << endl;
        cout << "Nao foi possivel remover nenhum elemento!" << endl;
    } else {
        No<T> *aux;
        aux = NoTopo;
        T dadoTopo = NoTopo->valor;
        NoTopo = NoTopo->proximo;
        delete aux;
        return dadoTopo;
    }
}

template < typename T >
void Pilha<T>::imprimir()
{
    No<T> *aux = NoTopo;
    cout << "Pilha: [";
    while (aux != nullptr) {
        cout << aux->valor << " ";
        aux = aux->proximo;
    }
    cout << "]\n";
}
