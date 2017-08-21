#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long j,s,mi,dif,juga,jugb,conta,contb;
    string x;
    while(cin>>j>>s>>mi>>dif>>x){
        juga=jugb=conta=contb=0;
        for(int i=0;i<(int)x.size();++i){
            if(x[i]=='A')juga++;
            if(x[i]=='B')jugb++;
            if(juga>=mi || jugb>=mi){
                if(juga>jugb && juga-jugb>=dif)conta++,juga=0,jugb=0;
                else if(jugb>juga && jugb-juga>=dif)contb++,juga=0,jugb=0;
            }
        }
        cout<<conta<<" "<<contb<<"\n";
    }
    return 0;
}
