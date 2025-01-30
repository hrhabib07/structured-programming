// 6 palindrome check
#include <stdio.h>
int main(){
    int n; scanf("%d",&n); int t=0; int i=n;
    while (i)
    {
        t*=10;
        t+=i%10;
        i/=10;
    }; if(t==n) printf("Palindrome");
     else printf("Not Palindrome");
    return 0;
}