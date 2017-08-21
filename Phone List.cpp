#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    bool bandi;
    string palabra;
    int cases,test;
    cin>>cases;
    while(cases--){
        bandi=false;
        cin>>test;
        cin.ignore();
        vector<string>v(test);
        for(int i=0;i<test;++i)cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0;i<test-1;++i)if(v[i]==v[i+1].substr(0,(int)v[i].size())){bandi=true;break;}
        cout<<(bandi==false?"YES\n":"NO\n");
    }
    return 0;
}
 
