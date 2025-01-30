// 4 finding gcd
#include <stdio.h>
int main(){
    int a,b; scanf("%d %d",&a,&b);
    while (b)
    {
        int temp = a;
        a=b;
        b=temp%a;
    }
    printf("%d",a);
    return 0;
}