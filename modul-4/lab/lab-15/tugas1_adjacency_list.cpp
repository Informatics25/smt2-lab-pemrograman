#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N = 4; // Jumlah simpul (0, 1, 2, 3)
    vector<vector<int>> adj(N);

    // Fungsi lambda pembantu untuk menambahkan sisi (undirected)
    auto addEdge = [&](int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); 
    };

    addEdge(0, 1);
    addEdge(0, 2);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(2, 3);

    // Mencetak adjacency list
    cout << "Adjacency List Graf:\n";
    for (int u = 0; u < N; u++) {
        cout << u << ": ";
        for (int v : adj[u]) cout << v << " ";
        cout << "\n";
    }

    return 0;
}