# 🌳 Algoritmo de Kruskal - Árvore Geradora Mínima

Este repositório contém uma implementação do **Algoritmo de Kruskal** em C++. O objetivo do projeto é encontrar a Árvore Geradora Mínima (MST - Minimum Spanning Tree) de um grafo ponderado não direcionado.

Este código foi desenvolvido como parte de estudos em **Teoria dos Grafos**.

##  Funcionalidades

- Leitura de arestas e pesos do grafo.
- Ordenação das arestas por peso (crescente).
- Utilização da estrutura de dados **Union-Find** (para detecção de ciclos).
- Exibição das arestas que compõem a Árvore Geradora Mínima.
- Cálculo do custo total da MST.

##  Tecnologias Utilizadas

* **Linguagem:** C++
* **Compilador:** g++ (MinGW ou similar)

##  Como rodar o projeto

### Pré-requisitos
Certifique-se de ter um compilador C++ instalado (como o G++).

### Passo a passo

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/Maryedw/NOME-DO-REPOSITORIO.git](https://github.com/Maryedw/NOME-DO-REPOSITORIO.git)
Abra o terminal na pasta do projeto e execute: g++ Kruskal.cpp -o kruskal
No Windows: ./kruskal.exe
No Linux/Mac: ./kruskal

Exemplo de Entrada:

4 5

0 1 10

0 2 6

0 3 5

1 3 15

2 3 4

✒️ Autor
Maryedw - Desenvolvimento
Este projeto é para fins educacionais.
