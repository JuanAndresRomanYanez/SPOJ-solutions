#include <stdio.h>
long long v[21],power[21],a;
void solve(){
    v[1]=1,power[0]=1,power[1]=2;
    for(int i=2;i<=20;++i)v[i]=v[i-1]*i,power[i]=power[i-1]*2;
}
int main(){
    solve();
    scanf("%lld", &a),printf("%lld\n", v[a]+power[a]-a);
}
