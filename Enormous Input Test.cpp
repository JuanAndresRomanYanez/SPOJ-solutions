#include <stdio.h>
int main(){
    long long a,b,x,cont=0;
    scanf("%lld%lld", &a, &b);
    while(a--){
        scanf("%lld", &x);
        if(x%b==0)cont++;
    }
    printf("%lld\n", cont);
}
