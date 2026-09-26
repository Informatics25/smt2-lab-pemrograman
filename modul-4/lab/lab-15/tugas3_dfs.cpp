#include <iostream>
#include <vector>
#include <stack>
using namespace std;

// DFS Versi Rekursif
void dfsRecursive(const vector<vector<int>>& adj, vector<bool>& visited, int u) {
    visited[u] = true;
    cout << u << " ";
    for (int v : adj[u]) {
        if (!visited[v]) {
            dfsRecursive(adj, visited, v);
        }
    }
}

// DFS Versi Iteratif (Menggunakan Stack Eksplisit)
void dfsIterative(const vector<vector<int>>& adj, int start) {
    int N = adj.size();
    vector<bool> visited(N, false);
    stack<int> s;
    
    s.push(start);
    
    while (!s.empty()) {
        int u = s.top(); 
        s.pop();
        
        if (visited[u]) continue;
        
        visited[u] = true;
        cout << u << " ";
        
        // Memasukkan ke stack dengan urutan terbalik agar diproses sesuai urutan array
        for (int i = adj[u].size() - 1; i >= 0; i--) {
            int v = adj[u][i];
            if (!visited[v]) s.push(v);
        }
    }
}

int main() {
    int N = 4;
    vector<vector<int>> adj(N);
    adj[0] = {1, 2};
    adj[1] = {0, 2, 3};
    adj[2] = {0, 1, 3};
    adj[3] = {1, 2};

    cout << "DFS Rekursif: ";
    vector<bool> visited(N, false);
    dfsRecursive(adj, visited, 0);
    cout << "\n";

    cout << "DFS Iteratif: ";
    dfsIterative(adj, 0);
    cout << "\n";

    return 0;
}