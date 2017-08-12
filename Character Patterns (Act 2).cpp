#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%i", &a);
    while(a--){
        scanf("%i%i", &b, &c);
        for(int j=0;j<b;++j){
            if(j==0 || j==b-1)for(int i=0;i<c;++i)printf("*");
            else for(int i=0;i<c;++i)printf(i==0 || i==c-1?"*":".");
            printf("\n");
        }
    }
}
 
