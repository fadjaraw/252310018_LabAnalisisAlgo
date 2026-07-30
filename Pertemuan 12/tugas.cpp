#include <bits/stdc++.h>
#define MAX 10005
#define INF INT_MAX
using namespace std;

vector<pair<int, int>> adj[MAX];
bool visited[MAX];
int dist[MAX];
int parent[MAX];

void dijkstra(int start) 
{
    memset(visited, false, sizeof(visited));

    for (int i = 0; i < MAX; i++) 
    {
        dist[i] = INF;
        parent[i] = -1;
    }

    dist[start] = 0;

    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    pq.push({0, start});

    while (!pq.empty()) 
    {
        pair<int, int> current = pq.top();
        pq.pop();

        int x = current.second;

        if (visited[x]) continue;
        visited[x] = true;

        for (int i = 0; i < adj[x].size(); i++) 
        {
            int y = adj[x][i].first;
            int weight = adj[x][i].second;

            if (dist[x] + weight < dist[y]) 
            {
                dist[y] = dist[x] + weight;
                parent[y] = x;
                pq.push({dist[y], y});
            }
        }
    }
}

int main() 
{
    // Graph
    adj[1].push_back({2, 4});
    adj[2].push_back({1, 3});
    adj[2].push_back({3, 6});
    adj[3].push_back({2, 2});
    adj[3].push_back({4, 7});
    adj[3].push_back({5, 5});
    adj[4].push_back({3, 4});
    adj[5].push_back({3, 5});
    int start = 1;
    int tujuan = 4;

    dijkstra(start);
    cout << "Jarak terpendek dari node " << start << " ke node " << tujuan << " adalah melalui ";

    vector<int> path;

    for (int v = tujuan; v != -1; v = parent[v]) 
    {
        path.push_back(v);
    }

    reverse(path.begin(), path.end());

    for (int i = 0; i < path.size(); i++)
    {
        cout << path[i];
        if (i != path.size() - 1) cout << " -> ";
    }

    cout << " dengan weight sebesar " << dist[tujuan] << endl;

    return 0;
}
