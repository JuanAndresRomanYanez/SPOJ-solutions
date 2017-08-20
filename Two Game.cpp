#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int cases;
    long long x,y,ma,mi,aux;
    cin>>cases;
    while(cases--){
        bitset<64>lol,pol;
        cin>>x>>y;
        lol=x,pol=y;
        if(lol.count()==1 || pol.count()==1)cout<<"Y\n";
        else{
            ma=max(x,y);
            mi=min(x,y);
            while(mi!=0){
                aux=ma;
                ma=mi;
                mi=aux%mi;
            }
            lol=ma;
            if(lol.count()==1)cout<<"Y\n";
            else cout<<"N\n";
        }
    }
    return 0;
}
 
