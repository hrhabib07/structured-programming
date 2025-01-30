// 5 finding factorial
#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    long long int fac=1;
    while (n)
    {
        fac*=n;
        n--;
    }; printf("%lld", fac);
    return 0;
}