#include <stdio.h>
int main(){
    int cases,a,b,h,w;
    scanf("%i", &cases);
    while(cases--){
        scanf("%i%i%i%i", &a, &b, &h, &w);
        for(int j=0;j<a*(h+1)+1;++j){
                if(j%(h+1)==0)for(int i=0;i<=(w*b)+b;++i)printf("*");
                else for(int i=0;i<=(w*b)+b;++i)printf(i%(w+1)==0?"*":".");
                printf("\n");
        }
        printf("\n");
    }
}
