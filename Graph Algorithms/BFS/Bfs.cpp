#include <bits/stdc++.h>
using namespace std;
int main() {

    map<char, vector<char>> graph;

    graph['A'] = {'B','C'};
    graph['B'] = {'D','E'};
    graph['C'] = {};
    graph['D'] = {};
    graph['E'] = {};

    queue<char> q;
    set<char> visited;

    q.push('A');
    visited.insert('A');

    while(!q.empty()){

        char node = q.front();
        q.pop();

        cout << node << " ";

        for(char neighbor : graph[node]){
            if(visited.count(neighbor) == 0){
                visited.insert(neighbor);
                q.push(neighbor);
            }
        }
    }
}
