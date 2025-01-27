#include <stdio.h>
int main(){
    int l,r;
    scanf("%d %d",&l,&r);
    int res;
    if(l%2==0 && r%2==0){
        res= ((r-l)/2);
    } else{
        res= ((r-l)/2)+1;
    }
    printf("%d",res);
    return 0;
}