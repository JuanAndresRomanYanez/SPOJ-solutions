#include <bits/stdc++.h>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);
using namespace std;
int main(){
    optimizar_io
    long long diff=0;
    int a,res=0,it=1;
    cin>>a;
    vector<long long> v(a);
    for(int i=0;i<a;++i)cin>>v[i];
    sort(v.rbegin(),v.rend());
    vector<int>difer(a/2);
    for(int i=0;i<a;i+=2){
            difer[i/2]=fabs(v[i]-v[i+1]);
            diff+=difer[i/2];
    }
    sort(difer.begin(),difer.end());
    if(diff==0)cout<<"-1\n";
    else {
        int auxi=difer[0];
        diff-=difer[0];
        while(diff>auxi){
            diff-=difer[it];
            auxi+=difer[it++];
            res++;
        }
        cout<<res<<"\n";
    }
    return 0;
}
