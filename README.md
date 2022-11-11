![image](https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
## Avaliação Pilhas



### Objetivo:
O objetivo do repositório é armazenar o código fonte da avaliação de uma pilha implementada com uma estrutura 
do tipo lista encadeada, além disso a pilha tem que ser genérica, implementando o conceito de sobrecarga de classe (Template) em C++

### Implementação:
A Pilha deve implementar as seguintes estruturas:
  - Um objeto pilha de inteiros:
    - exemplo: Pilha<int> intPilha;
  - Um objeto pilha de string:
    - exemplo: Pilha<string> strPilha;
  - Um objeto pilha de pontos:
    - exemplo: Pilha<Pontos> pontosPilha;

### Preenchendo Região:
Em suma, o algoritmo empilha o ponto interior inicial e depois segue, enquanto a pilha não for vazia, preenchendo (visitando) o ponto do topo da pilha, se esse já não estiver preenchido (visitado), e termina empilhando os seus vizinhos ao norte, sul, leste e oeste, se esses ainda não foram visitados. Essa é a mesma lógica do algoritmo recursivo. 
