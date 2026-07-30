#include <iostream>
#include <string>
using namespace std;

const int V = 7;
const int INF = 99999;

int main() 
{
    string kota[V] = 
    {
        "Cibinong",
        "Cileubeut",
        "Tanah Sereal",
        "Bogor Tengah",
        "Bogor Utara",
        "Baranangsiang",
        "Tajur"
    };

    int graph[V][V] = {0};

    graph[0][1] = 1; // Cibinong -> Cileubeut
    graph[1][2] = 1; // Cileubeut -> Tanah Sereal
    graph[2][3] = 1; // Tanah Sereal -> Bogor Tengah
    graph[3][6] = 1; // Bogor Tengah -> Tajur

    graph[0][4] = 1; // Cibinong -> Bogor Utara
    graph[4][5] = 1; // Bogor Utara -> Baranangsiang
    graph[5][6] = 1; // Baranangsiang -> Tajur

    int dist[V];
    bool visited[V];
    int parent[V];

    for(int i = 0; i < V; i++) 
    {
        dist[i] = INF;
        visited[i] = false;
        parent[i] = -1;
    }

    int start = 0; // Cibinong
    int goal = 6; // Tajur
	dist[start] = 0;

    for(int count = 0; count < V - 1; count++) 
    {
        int minDist = INF;
        int u = -1;

        for(int i = 0; i < V; i++) 
        {
            if(!visited[i] && dist[i] < minDist) 
            {
                minDist = dist[i];
                u = i;
            }
        }

        if(u == -1) break;
        visited[u] = true;

        for(int v = 0; v < V; v++) 
        {
            if(graph[u][v] != 0 && !visited[v] && dist[u] + graph[u][v] < dist[v]) 
            {
                dist[v] = dist[u] + graph[u][v];
                parent[v] = u;
            }
        }
    }

    cout << "Jarak Terpendek dari " << kota[start] << " ke " << kota[goal] << " = " << dist[goal] << endl;

    int path[V];
    int idx = 0;

    for(int v = goal; v != -1; v = parent[v]) 
    {
        path[idx++] = v;
    }

    cout << "Rute: ";

    for(int i = idx - 1; i >= 0; i--) 
    {
        cout << kota[path[i]];
        if(i > 0) cout << " -> ";
    }

    cout << endl;

    return 0;
}
