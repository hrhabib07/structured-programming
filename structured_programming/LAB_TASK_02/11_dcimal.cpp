// 11. decimal to binary in cpp
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    vector<int>v;
    while (n)
    {
        int x = n%2;
        v.push_back(x);
        n/=2;
    };
    for (int i = v.size()-1; i >= 0; i--)
    {
        cout<<v[i];
    }
    
    return 0;
}