#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    int a;
    long long x,sum,sumt;
    while( (cin>>a) && (a!=0) ){
        sum=sumt=0;
        for(int i=0;i<a;++i){
            cin>>x;
            sum+=x;
            sumt+=abs(sum);
        }
        cout<<sumt<<"\n";
    }
    return 0;
}
 
