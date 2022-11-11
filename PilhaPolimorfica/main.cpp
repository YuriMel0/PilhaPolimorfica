#include <iostream>
#include "Pilha.h"

using std::cout;
using std::endl;

int main()
{
    Pilha<int> intpilha;

    for(int i = 0; i < 10; i++)
    {
        intpilha.inserir(i);
    }

    intpilha.imprimir();

    return 0;
}
