// Disjoint Set Union

// Language: cpp
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Disjoint Set Union
class DisjointSetUnion {
    private:
        int *parent;
        int *rank;
        int n;
    public:
        DisjointSetUnion(int n) {
            this->n = n;
            parent = new int[n + 1];
            rank = new int[n + 1];
            for (int i = 0; i <= n; i++) {
                rank[i] = 0;
                parent[i] = i;
            }
        }
        int find(int u) {
            if (u != parent[u])
                parent[u] = find(parent[u]);
            return parent[u];
        }
        void merge(int x, int y) {
            x = find(x), y = find(y);
            if (rank[x] > rank[y])
                parent[y] = x;
            else
                parent[x] = y;
            if (rank[x] == rank[y])
                rank[y]++;
        }
};

int main() {
    srand(time(NULL));
    int n = 10;
    DisjointSetUnion dsu(n);
    for (int i = 1; i <= n; i++) {
        int u = rand() % n + 1;
        int v = rand() % n + 1;
        cout << "Merging " << u << " and " << v << endl;
        dsu.merge(u, v);
    }
    for (int i = 1; i <= n; i++)
        cout << "find(" << i << ") = " << dsu.find(i) << endl;
    return 0;
}
