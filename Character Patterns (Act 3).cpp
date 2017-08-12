#include <stdio.h>
int main(){
    int cases,a,b;
    scanf("%i", &cases);
    while(cases--){
        scanf("%i%i", &a, &b);
        for(int j=0;j<a*3+1;++j){
                if(j%3==0)for(int i=0;i<3*b+1;++i)printf("*");
                else for(int i=0;i<=3*b;++i)printf(i%3==0?"*":".");
                printf("\n");
        }
        printf("\n");
    }
}
 
