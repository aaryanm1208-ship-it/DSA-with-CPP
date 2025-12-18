#include <iostream>
#include <vector>
using namespace std;

vector<int> adj[5];
bool visited[5];

void dfs(int v) {
    visited[v] = true;
    cout << v << " ";
    for (int u : adj[v])
        if (!visited[u])
            dfs(u);
}

int main() {
    adj[0].push_back(1);
    adj[0].push_back(2);
    adj[1].push_back(3);
    adj[2].push_back(4);

    dfs(0);
    return 0;
}
