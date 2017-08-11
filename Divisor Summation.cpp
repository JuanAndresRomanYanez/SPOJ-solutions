#include <stdio.h>
int main(){
    int a,cont=0,x;
    scanf("%i", &a);
    while(a--){
        scanf("%i", &x);
        cont=0;
        for(int i=1;i<=x/2;++i)if(x%i==0)cont+=i;
        printf("%i\n", cont);
    }
}
