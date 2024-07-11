#include <iostream>
#include <vector>
#include <queue>
using namespace std;


const int N = 6; 

vector<int> edges[N];

void bfs(int start) {
    vector<bool> visited(N, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : edges[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main() {
 
    edges[1].emplace_back(2);
    edges[2].emplace_back(1);
    edges[1].emplace_back(3);
    edges[3].emplace_back(1);
    edges[1].emplace_back(5);
    edges[5].emplace_back(1);
    edges[2].emplace_back(4);
    edges[4].emplace_back(2);
    edges[5].emplace_back(4);
    edges[4].emplace_back(5);
    edges[3].emplace_back(4);
    edges[4].emplace_back(3);


    cout << "BFS starting from node 1: ";
    bfs(1);

    return 0;
}