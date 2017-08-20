#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a;
    while(cin>>a && a!=-1){
        long long res=0,sum=0;
        vector<int>v(a);
        for(int i=0;i<a;++i){
                cin>>v[i];
                sum+=v[i];
        }
        if(sum%a==0){
                for(int i=0;i<a;++i)res+=(abs(v[i]-(sum/a)));
                cout<<res/2<<"\n";
        }
        else cout<<"-1\n";
    }
    return 0;
}
  
