// 10. prime number
#include <stdio.h>
#include <math.h>
int main(){
    int n,m; scanf("%d %d",&n,&m);
    for (int i = n; i <= m; i++)
    {
        if(i%2==0){
            continue;
        } else{
            int count =0;
            for (int j = 1; j<=sqrt(i); j++)
            {
                if(i%j==0){
                    count++;
                }
            }
            if(count<=1){
                printf("%d ",i);
            }
        }
    }
    
    return 0;
}