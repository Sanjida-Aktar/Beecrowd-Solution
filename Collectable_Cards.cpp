#include<bits/stdc++.h>
using namespace std;
int main(){
     int t;
     cin>>t;
     while(t--)
     {
        int x,y;
        cin>>x>>y;
        int res = __gcd(x,y);
        cout<<res<<endl;
     }
    return 0;
}