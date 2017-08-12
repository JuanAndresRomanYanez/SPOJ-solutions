#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%i", &a);
    while(a--){
        scanf("%i%i", &b, &c);
        for(int i=0;i<b;++i){
            if(i%2==0)for(int j=0;j<c;++j)printf(j&1?".":"*");
            else for(int j=0;j<c;++j)printf(j&1?"*":".");
            printf("\n");
        }
    }
}
 
