#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int cases,test;
    long long x,x1;
    char y,y1;
    bool ok;
    cin>>cases;
    while(cases--){
        ok=false;
        cin>>test>>x1>>y1;
        for(int i=1;i<test;++i){
            cin>>x>>y;
            if(x==x1 || y==y1)ok=true;
            else x1=x,y1=y;
        }
        cout<<(ok?"M\n":"B\n");
    }
    return 0;
}
