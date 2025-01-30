// reverse int 
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n; scanf("%d",&n);
    int t=abs(n);
    int new =0;
    while (t>0)
    {
        new*=10;
        new+=t%10;
        t/=10;
    };
    if(n<0){
        printf("%d",-new);
    }else{
        printf("%d",new);
    }
    return 0;
}