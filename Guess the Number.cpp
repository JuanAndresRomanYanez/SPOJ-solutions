#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
bool ok;
long long res,y;
int main(){
    optimizar_io
    int it[8]={2,3,5,7,11,13,17,19};
    string a;
    while(cin>>a && a!="*"){
        vector<int>sum;
        res=1,y=0;
        for(int i=0;i<(int)a.size();++i)if(a[i]=='Y')sum.push_back(i+1);
            while(true){
                ok=false;
                for(int j=0;j<(int)sum.size();++j)if(sum[j]%it[y]==0)sum[j]/=it[y],ok=true;
                if(ok==false)y++;
                if(ok==true)res*=it[y];
                if(y==8)break;
            }
        for(int i=1;i<=20;++i)if(res%i==0 && i<=20)if(a[i-1]=='N'){cout<<"-1\n";goto kok;}
        cout<<res<<"\n";
        kok:;
    }
    return 0;
} 
