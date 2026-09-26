#include <iostream>
#include <vector>
using namespace std;

void dfs(const vector<vector<int>>& adj, vector<bool>& visited, int u) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfs(adj, visited, v);
        }
    }
}

int countComponents(const vector<vector<int>>& adj) {
    int N = adj.size();
    vector<bool> visited(N, false);
    int components = 0;

    for (int u = 0; u < N; u++) {
        if (!visited[u]) { // Ditemukan simpul yang belum dikunjungi
            dfs(adj, visited, u); // Jelajahi semua simpul yang terhubung dengannya
            components++; // Hitung sebagai satu blok/komponen
        }
    }
    return components;
}

int main() {
    int N = 6;
    vector<vector<int>> adj(N);
    
    // Komponen 1: (0, 1, 2) saling terhubung
    adj[0].push_back(1); adj[1].push_back(0);
    adj[1].push_back(2); adj[2].push_back(1);
    
    // Komponen 2: (3, 4, 5) saling terhubung, tapi terputus dari komponen 1
    adj[3].push_back(4); adj[4].push_back(3);
    adj[4].push_back(5); adj[5].push_back(4);

    int total = countComponents(adj);
    
    cout << "Jumlah komponen terhubung: " << total << "\n";
    // Output: 2
    
    return 0;
}
