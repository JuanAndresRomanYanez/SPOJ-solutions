#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int cases,nodos,aristas,x,y,cont;
const int MAX=100005;
bool vis[MAX];
vector<vector<int> >g;
void dfs(int u){
    vis[u]=true,cont++;
    for(int i=0;i<(int)g[u].size();++i)if(!vis[g[u][i]])dfs(g[u][i]);
}
int main(){
    optimizar_io
    cin>>cases;
    while(cases--){
        cont=0;
        cin>>nodos>>aristas;
        g.assign(nodos+5,vector<int>());
        memset(vis,false,sizeof vis);
        for(int i=0;i<aristas;++i){
            cin>>x>>y;
            g[x].push_back(y);
            g[y].push_back(x);
        }
        dfs(1);
        cout<<(cont==nodos?"YES\n":"NO\n");
    }
    return 0;
}
