#include <iostream>
#include <math.h>
#include <vector>
#include <set>
#define optimizar_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
int cap,T,N,M,start;
bool isprime;
vector<int> primes;
void g(){
    primes.push_back(2);
    for (int i=3;i<=32000;i+=2) {
        isprime=true;
        cap =sqrt(i)+1;
        for (int p=0; p<(int)primes.size();p++){
            if (primes[p]>=cap)break;
            if (i%primes[p]==0){
                isprime = false;
                break;
            }
        }
        if (isprime)primes.push_back(i);
    }
}
int main() {
    optimizar_io
    g();
    cin >> T;
    for (int t = 0; t < T; t++) {
        cin>>M>>N;
        if (M<2)M=2;
        cap=sqrt(N)+1;
        set<int>notprime;
        notprime.clear();
        for (int p=0;p<(int)primes.size();p++) {
            if (primes[p]>=cap)break;
            if (primes[p]>=M)start=primes[p]*2;
            else start=M+((primes[p]-M%primes[p])%primes[p]);
            for (int j=start;j<=N;j+=primes[p])notprime.insert(j);
        }
        for(int i=M;i<=N;i++)if(notprime.count(i)==0)cout<<i<<endl;
        cout<<endl;
    }
}
