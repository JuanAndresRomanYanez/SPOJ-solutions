#include <stdio.h>
int main(){
    int n;
    while(true){
        scanf("%i", &n);
        printf("%i\n", n);
        fflush(stdout);
        if(n==42)break;
    }
    return 0;
}
 
