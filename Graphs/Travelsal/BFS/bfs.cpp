#include <bits/stdc++.h>
using namespace std;

const int N = 100005;

int n, m;
vector<int> adj[N], order;
bool vis[N];

void bfs(int beg = 0){
  queue<int> q;
  vis[beg] = true;
  q.push(beg);
  order.push_back(beg);

  while(!q.empty()){
    int u = q.front();
    q.pop();
    for(int v : adj[u]){
      if(!vis[v]){
        vis[v] = true;
        q.push(v);
        order.push_back(v);
      }
    }
  }
}

int main(){
  ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL);

  cin >> n >> m;
  for(int i = 0; i < m; i++){
    int u, v;
    cin >> u >> v;
    u--, v--;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }

  bfs();

  cout << "visiting order:\n";
  for(int u : order)  cout << u << " ";
  cout << "\n";
}