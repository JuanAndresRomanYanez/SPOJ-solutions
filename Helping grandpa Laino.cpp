#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
string a;
int main(){
    optimizar_io
    while(cin>>a){
        for(int i=0;i<(int)a.size();++i)if(a[i]=='i'){cout<<"N\n";goto kok;}
        cout<<"S\n";
        kok:;
    }
    return 0;
}
 
