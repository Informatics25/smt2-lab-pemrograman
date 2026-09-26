#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void bfs(const vector<vector<int>>& adj, int start) {
    int N = adj.size();
    vector<bool> visited(N, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "Urutan BFS: ";
    while (!q.empty()) {
        int u = q.front(); 
        q.pop();
        
        cout << u << " ";

        for (int v : adj[u]) {
            if (!visited[v]) {
                visited[v] = true;
                q.push(v);
            }
        }
    }
    cout << "\n";
}

int main() {
    int N = 4;
    vector<vector<int>> adj(N);
    adj[0] = {1, 2};
    adj[1] = {0, 2, 3};
    adj[2] = {0, 1, 3};
    adj[3] = {1, 2};

    bfs(adj, 0); // Output: 0 1 2 3 (atau 0 2 1 3 tergantung urutan list)
    
    return 0;
}