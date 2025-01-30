// 7 fibonacci 
#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int a=0,b=1,next;
    printf("%d %d ",a,b);
    while (n)
    {
        next=a+b;
        printf("%d ",next);
        a=b; b=next; n--;
    } 
    return 0;
}