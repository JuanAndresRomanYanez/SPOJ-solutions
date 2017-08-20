#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
const int MAX=100005;
bool vis[MAX];
vector<vector<int> >lol;
long long cont=0,x,y,nodos,aristas;
void dfs(int u){
    vis[u]=true,cont++;
    for(int i=0;i<(int)lol[u].size();++i){
        int b=lol[u][i];
        if(!vis[b])dfs(b);
    }
}
int main(){
    optimizar_io
    cin>>nodos>>aristas;
    lol.assign(nodos+5,vector<int>());
    memset(vis,false,sizeof vis);
    for(int i=0;i<aristas;++i){
        cin>>x>>y;
        lol[x].push_back(y);
        lol[y].push_back(x);
    }
    dfs(1);
    if(cont==nodos && aristas==nodos-1)cout<<"YES\n";
    else cout<<"NO\n";
    return 0;
}
