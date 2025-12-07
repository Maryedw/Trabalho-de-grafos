#include <bits/stdc++.h>
using namespace std;

struct Aresta {
    int u, v;
    double peso;

    bool operator<(const Aresta& other) const {
        return peso < other.peso;
    }
};

struct DSU {
    vector<int> pai, rank;

    DSU(int n) : pai(n), rank(n, 0) {
        iota(pai.begin(), pai.end(), 0);
    }

    int find(int x) {
        if (pai[x] == x) return x;
        return pai[x] = find(pai[x]);
    }

    bool unite(int a, int b) {
        a = find(a);
        b = find(b);
        if (a == b) return false;
        if (rank[a] < rank[b]) swap(a, b);
        pai[b] = a;
        if (rank[a] == rank[b]) rank[a]++;
        return true;
    }
};

int main() {
    int n, m;
    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    if (!(cin >> n >> m)) return 0;

    vector<Aresta> arestas(m);

    for (int i = 0; i < m; i++)
        cin >> arestas[i].u >> arestas[i].v >> arestas[i].peso;

    sort(arestas.begin(), arestas.end());

    // CORREÇÃO CRÍTICA: n + 1 para suportar inputs que começam em 1
    DSU dsu(n + 1); 
    
    double custoTotal = 0;
    vector<Aresta> mst;

    for (auto &e : arestas) {
        if (dsu.unite(e.u, e.v)) {
            mst.push_back(e);
            custoTotal += e.peso;
        }
    }

    cout << "Peso total da MST: " << custoTotal << endl;

    for (auto &e : mst)
        cout << e.u << " - " << e.v << " (" << e.peso << ")" << endl;

    return 0;
}