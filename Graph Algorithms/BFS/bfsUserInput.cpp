#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "Number of edges: ";
    cin >> n;

    map<char, vector<char>> graph;

    cout << "Enter edges (Example: A B):\n";

    for(int i = 0; i < n; i++){
        char u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    char start;
    cout << "Start node: ";
    cin >> start;

    queue<char> q;
    set<char> visited;

    q.push(start);
    visited.insert(start);

    cout << "BFS Traversal:\n";

    bool first = true;

    while(!q.empty()){

        char node = q.front();
        q.pop();

        if(!first) cout << " -> ";
        cout << node;
        first = false;

        for(char neighbor : graph[node]){
            if(!visited.count(neighbor)){
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }

    cout << endl;

    return 0;
}
