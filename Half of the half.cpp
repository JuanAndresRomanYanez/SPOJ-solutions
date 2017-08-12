#include <iostream>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int main(){
    optimizar_io
    string x;
    int a;
    cin>>a;
    cin.ignore();
    while(a--){
        cin>>x;
        for(int i=0;i<(int)x.size()/2;++i)if(i%2==0)cout<<x[i];
        cout<<"\n";
    }
    return 0;
}
